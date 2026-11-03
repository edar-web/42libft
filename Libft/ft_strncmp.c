/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncmp.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 18:02:11 by username         #+#    #+#              */
/*   Updated: 2026/11/03 13:47:10 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*sr1;
	unsigned char	*sr2;
	size_t			i;

	sr1 = (unsigned char *) s1;
	sr2 = (unsigned char *) s2;
	i = 0;
	if (n <= 0)
		return (0);
	while (i < n - 1 && sr1[i] == sr2[i] && sr1[i] && sr2[i])
		i++;
	return (sr1[i] - sr2[i]);
}
