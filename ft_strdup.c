/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoossen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:39:18 by vgoossen          #+#    #+#             */
/*   Updated: 2023/10/23 14:03:35 by vgoossen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;

	if (!(s2 = (char *)malloc(ft_strlen(s) + 1)))
		return(0);
	ft_memcpy(s2, s, ft_strlen(s) + 1);
	return (s2);
}
