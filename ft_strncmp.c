/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:01:14 by namirtha          #+#    #+#             */
/*   Updated: 2024/03/11 14:45:17 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (n)
	{
		if (s1[i] != s2[i])
		{
			return ((int)(s1 + i) - (int)s2[i + i]); //casting
		}
		else
			n --;
		i++;
	}
	return (s1[i] - s2[i]);
}
