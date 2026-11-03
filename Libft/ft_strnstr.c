/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edtintur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 13:00:31 by edtintur          #+#    #+#             */
/*   Updated: 2026/10/26 13:25:08 by edtintur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	size;

	if (*little == '\0')
		return ((char *)big);
	if (ft_strlen(big) < ft_strlen(little) || len < ft_strlen(little))
		return (0);
	if (ft_strlen(big) > len)
		size = len;
	else
		size = ft_strlen(big);
	while (size-- >= ft_strlen(little))
	{
		if (ft_memcmp(big, little, ft_strlen(little)) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
