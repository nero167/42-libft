/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:55:08 by namirtha          #+#    #+#             */
/*   Updated: 2024/03/08 17:45:51 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*p;

	p = ptr;
	while (len > 0)
	{
		*p = (unsigned char) value;
		*p++;
		len--;
	}
	return (p);
}

/* size_t = Datentyp, spezieller Typ in C und C++, der dazu verwendet wird, Größen oder Längen
von Objekten in Byte zu repräsentieren. Es ist ein vorzeichenloser Ganzzahltyp, 
der dazu bestimmt ist, die Größe von Objekten im Speicher darzustellen, 
unabhängig von der Plattform oder dem System, auf dem der Code ausgeführt wird. */

/* Memset wird verwendet um einen bestimmten Wert in einen Speicherbereich zu setzen */
