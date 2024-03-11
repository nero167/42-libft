/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:50:57 by namirtha          #+#    #+#             */
/*   Updated: 2024/03/11 11:59:01 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	int				i;

	i = 0;
	p = s;
	while (n--)
	{
		p[i] = 0;
		*(p + i) = 0; // andere Art um auf den Value zuzugreifen mit pointer
		i++;
	}
}

/*Die Funktion bzero in C wird verwendet, 
um einen Speicherbereich mit Nullen zu füllen.*/