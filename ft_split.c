/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoossen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:07:36 by vgoossen          #+#    #+#             */
/*   Updated: 2023/10/24 12:43:10 by vgoossen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_sepstring(char **strs, const char *str, char sep)
{
	char		**strs_t;
	const char	*tmp;

	tmp = str;
	strs_t = strs;
	while (*tmp)
	{
		while (*str == sep)
			str++;
		tmp = str;
		while (*tmp && *tmp != sep)
			tmp++;
		if (*tmp == sep || tmp > str)
		{
			*strs_t = ft_substr(str, 0, tmp - str);
			str = tmp;
			strs_t++;
		}
	}
	*strs_t = NULL;
}

static int	ft_counter(const char *str, char sep)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str == sep)
			str++;
		if (*str)
			i++;
		while (*str && *str != sep)
			str++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**new;
	int		size;

	if (!s)
		return (NULL);
	size = ft_counter(s, c);
	new = (char **)malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	ft_sepstring(new, s, c);
	return(new);
}
