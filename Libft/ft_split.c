/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 16:38:21 by username         #+#    #+#              */
/*   Updated: 2026/11/03 13:46:33 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ccount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*printer(const char *str, int start, int end)
{
	char	*printed;
	int		i;

	i = 0;
	printed = malloc(sizeof(char) * (end - start + 1));
	if (!printed)
		return (NULL);
	while (start < end)
	{
		printed[i] = str[start];
		i++;
		start++;
	}
	printed[i] = '\0';
	return (printed);
}

static void	*freeall(char **strs, int j)
{
	while (j > 0)
		free(strs[--j]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	int		i;
	int		j;
	char	**strs;

	if (!s)
		return (NULL);
	strs = malloc(sizeof(char *) * (ccount(s, c) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	j = -1;
	while (++j < ccount(s, c))
	{
		while (s[i] == c)
			i++;
		index = i;
		while (s[i] && s[i] != c)
			i++;
		strs[j] = printer(s, index, i);
		if (!strs[j])
			return (freeall(strs, j));
	}
	strs[j] = NULL;
	return (strs);
}
