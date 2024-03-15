/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:12:59 by namirtha          #+#    #+#             */
/*   Updated: 2024/03/14 19:31:24 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	int		i;

	h = haystack;
	n = needle;
	i = 0;
	while (len)
	{
		if (n[i] == h[i])
		{
			return (n + i);
		}
		else
		{
			return (NULL);
		}
	}
}
