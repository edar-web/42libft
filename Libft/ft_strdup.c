/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/09 12:33:02 by username         #+#    #+#              */
/*   Updated: 2026/11/03 13:46:35 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		p;

	p = 0;
	dup = 0;
	dup = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	if (!s)
		return (NULL);
	while (s[p])
	{
		dup[p] = s[p];
		p++;
	}
	dup[p] = '\0';
	return (dup);
}
