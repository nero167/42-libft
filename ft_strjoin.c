/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:51:34 by namirtha          #+#    #+#             */
/*   Updated: 2024/03/17 15:34:07 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	result;
	int		len1;
	int		len2;

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (s1 == 0 || s2 == 0)
	{
		return (NULL);
	}
	char	*result = (char*)malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
