/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbektas <bbektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 21:18:27 by bbektas           #+#    #+#             */
/*   Updated: 2023/07/14 21:51:40 by bbektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	sizedst;
	size_t	sizesrc;

	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	i = 0;
	if (dstsize <= sizedst || dstsize == 0)
		return (dstsize + sizesrc);
	while (src[i] != '\0' && i < dstsize - sizedst - 1)
	{
		dst[i + sizedst] = src[i];
		i++;
	}
	dst[i + sizedst] = '\0';
	return (sizedst + sizesrc);
}
