/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbektas <bbektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:22:05 by bebektas          #+#    #+#             */
/*   Updated: 2023/07/14 21:42:34 by bbektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);		
	if (dst > src)
	{
		while (n--)
			*((unsigned char *)(dst + n)) = *((unsigned char *)(src + n));
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
