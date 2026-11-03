/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 14:25:57 by username         #+#    #+#              */
/*   Updated: 2026/11/03 13:46:37 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*st1;

	st1 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!st1)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		st1[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		st1[i] = s2[j];
		i++;
		j++;
	}
	st1[i] = '\0';
	return (st1);
}
