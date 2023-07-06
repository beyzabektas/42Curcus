/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebektas <bebektas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:56:26 by bebektas          #+#    #+#             */
/*   Updated: 2023/07/06 17:58:45 by bebektas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*result;

	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	len = ft_strlen(s1);
	while (len && s1[len - 1] && ft_strchr(set, s1[len - 1]) != 0)
		len--;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	ft_memcpy(result, s1, len);
	result[len] = '\0';
	return (result);
}
int main()
{
	char str[] = "    Hello, world!   ";
	char set[] = " ";
	printf("%s",ft_strtrim(str,set));
}