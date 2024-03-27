/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:48:18 by namirtha          #+#    #+#             */
/*   Updated: 2024/03/27 21:22:24 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	y;

	y = -1;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			y = i;
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)(str + i));
	if (y != -1)
		return ((char *)(str + y));
	return (NULL);
}
