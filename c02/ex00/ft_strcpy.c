/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvreye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:14:39 by marvreye          #+#    #+#             */
/*   Updated: 2025/11/03 20:28:33 by marvreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
    char src[] = "Hola picinero";
    char dest[50]; // Buffer con espacio suficiente

    ft_strcpy(dest, src);

    printf("Cadena original: %s\n", src);
    printf("Cadena copiada:  %s\n", dest);

    return 0;
}*/
