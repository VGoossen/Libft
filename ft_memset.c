/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoossen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:54:49 by vgoossen          #+#    #+#             */
/*   Updated: 2023/10/19 13:12:20 by vgoossen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*start;

	start = (char *)b;
	while (len)
	{
		*start = (char)c;
		start++;
		len--;
	}
	return(b);
}

