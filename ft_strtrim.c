/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:34:33 by namirtha          #+#    #+#             */
/*   Updated: 2024/03/27 20:36:01 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_string;
	size_t	len;
	size_t	start;
	size_t	j;

	start = 0;
	len = ft_strlen(s1);
	while (s1[start] && ft_strrchr(set, s1[start]))
		start++;
	while (len > start && ft_strrchr(set, s1[len - 1]))
		len--;
	trim_string = malloc(sizeof(char) * (len - start + 1));
	if (trim_string == NULL)
		return (NULL);
	j = 0;
	while (start < len)
	{
		trim_string[j] = s1[start];
		start++;
		j++;
	}
	trim_string[j] = '\0';
	return (trim_string);
}
