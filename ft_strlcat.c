/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoossen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:54:48 by vgoossen          #+#    #+#             */
/*   Updated: 2023/10/19 12:37:43 by vgoossen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	res;
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	s = (char *)src;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(s);
	i = 0;
	res = 0;
	if (len_d < size)
		res = len_d + len_s;
	else
		res = size + len_s;
	while ( s[i] && (len_d + 1) < size)
	{
		dst[len_d] = s[i];
		i++;
		len_d++;
	}
	dst[len_d] = '\0';
	return (res);
}
