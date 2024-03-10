/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:10:15 by namirtha          #+#    #+#             */
/*   Updated: 2024/03/10 15:03:40 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	while (n --)
	{
		*d = s;
		*dst++;
		*src++;
	}
	return (dst);
}

/* Die Funktion memcpy in C dient dazu, Daten von einem Speicherbereich in einen anderen zu kopieren.*/
