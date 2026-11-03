/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 18:03:10 by username         #+#    #+#              */
/*   Updated: 2026/11/03 14:05:12 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = -1;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (n == 0 || dest == src)
		return (dest);
	if (d > s && d < s + n)
		while (n-- > 0)
			d[n] = s[n];
	else
	{
		while (++i < n)
			d[i] = s[i];
	}
	return (dest);
}
