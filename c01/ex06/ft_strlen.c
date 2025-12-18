/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvreye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:03:46 by marvreye          #+#    #+#             */
/*   Updated: 2025/10/30 20:08:13 by marvreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
    char texto[] = "Hola, 42!";
    int leng;

    leng = ft_strlen(texto);
    printf("La longitud del string es: %d\n", leng);
    return (0);
}*/
