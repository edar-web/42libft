/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 15:09:49 by username         #+#    #+#              */
/*   Updated: 2026/11/03 13:46:15 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	charcount(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_strrev(char *res)
{
	char	temp;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(res) - 1;
	if (res[i] == '-')
		i++;
	while (i < j)
	{
		temp = res[i];
		res[i] = res[j];
		res[j] = temp;
		i++;
		j--;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	res = malloc(sizeof(char) * (charcount(n) + 1));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		res[i++] = '-';
	}
	while (n)
	{
		res[i++] = (n % 10) + '0';
		n = n / 10;
	}
	res[i] = '\0';
	ft_strrev(res);
	return (res);
}
