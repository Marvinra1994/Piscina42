/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvreye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 12:12:54 by marvreye          #+#    #+#             */
/*   Updated: 2025/11/19 12:26:15 by marvreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j])
		j++;
	if (i == size)
		return (size + j);
	k = 0;
	while (src[k] && (i + k + 1) < size)
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (i + j);
}
/*
#include <stdio.h>


int main(void)
{

    char dest1[20] = "Hola ";
    char src1[] = "mundo!";
    unsigned int size1 = 20;

    unsigned int result1 = ft_strlcat(dest1, src1, size1);
    printf("Caso 1:\n");
    printf("dest: \"%s\"\n", dest1);
    printf("return: %u\n\n", result1);

    char dest2[10] = "Hola ";
    char src2[] = "mundo!";
    unsigned int size2 = 10;

    unsigned int result2 = ft_strlcat(dest2, src2, size2);
    printf("Caso 2 (espacio justo):\n");
    printf("dest: \"%s\"\n", dest2);
    printf("return: %u\n\n", result2);

    char dest3[5] = "Hola";
    char src3[] = " mundo!";
    unsigned int size3 = 5;

    unsigned int result3 = ft_strlcat(dest3, src3, size3);
    printf("Caso 3 (size menor que dest):\n");
    printf("dest: \"%s\"\n", dest3);
    printf("return: %u\n\n", result3);

    char dest4[3] = "Ho";
    char src4[] = "la!";
    unsigned int size4 = 3;

    unsigned int result4 = ft_strlcat(dest4, src4, size4);
    printf("Caso 4 (dest casi lleno):\n");
    printf("dest: \"%s\"\n", dest4);
    printf("return: %u\n\n", result4);

    return 0;
}*/
