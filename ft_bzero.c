/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:50:57 by namirtha          #+#    #+#             */
/*   Updated: 2024/03/08 18:09:38 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n)
	{
		*p++ = 0; /* *p dereferenziert den Zeiger p; =0 das Byte auf das p zeigt, wird auf 0 gesetzt;  */
		--n;
	}
}

/*Die Funktion bzero in C wird verwendet, 
um einen Speicherbereich mit Nullen zu füllen.*/