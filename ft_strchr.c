/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:31:37 by namirtha          #+#    #+#             */
/*   Updated: 2024/03/18 13:35:55 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	const char	*str;
	char		uc;

	str = s;
	uc = (char)c;
	while (*str)
	{
		if (*(str) == uc)
		{
			return ((char *)str);
		}
	}
	if (*str == uc)
		return ((char *)str);
	return (NULL);
}
