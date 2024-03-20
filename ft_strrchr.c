/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:48:18 by namirtha          #+#    #+#             */
/*   Updated: 2024/03/20 08:05:39 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*string;

	string = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *string && c != *s)
	{
		s--;
	}
	if (c == *s)
	{
		return ((char *)s);
	}
	return (0);
}
