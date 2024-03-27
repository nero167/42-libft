/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:51:34 by namirtha          #+#    #+#             */
/*   Updated: 2024/03/27 21:08:29 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;

	if (!s1 && !s2)
	{
		return (NULL);
	}
	if (s1)
		len = ft_strlen(s1);
	else
		len = 0;
	if (s2)
		len += ft_strlen(s2);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (s1)
		ft_strlcpy(str, s1, len + 1);
	if (s2)
		ft_strlcpy(str + ft_strlen(s1), s2, len - ft_strlen(s1) + 1);
	return (str);
}
