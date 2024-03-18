/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:10:15 by namirtha          #+#    #+#             */
/*   Updated: 2024/03/18 13:18:47 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	char				*temp;
	size_t				i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d == s)
		return (dst);
	temp = (char *)malloc(n);
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (n --)
	{
		temp[i] = s[i];
		i++;
	}
	while (n --)
	{
		d[i] = temp[i];
		i++;
	}
	return (dst);
}
