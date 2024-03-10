/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:55:03 by namirtha          #+#    #+#             */
/*   Updated: 2024/03/10 16:46:53 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	d;
	char	s;

	d = *dst;
	s = *src;
	while (dstsize)
	{
		d = s;
		*dst++;
		*src++;
	}
	return (dst);
}
