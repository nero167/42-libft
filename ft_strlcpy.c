/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:55:03 by namirtha          #+#    #+#             */
/*   Updated: 2024/03/18 13:38:15 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		i;

	i = 0;
	d = dst;
	s = src;
	while (src && dst && dstsize > 1)
	{
		d = (char *)s;
		d++;
		s++;
		dstsize--;
	}
	*d = '\0';
	while (*src++)
		i++;
	return (i);
}
