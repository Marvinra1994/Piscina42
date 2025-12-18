/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvreye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:31:01 by marvreye          #+#    #+#             */
/*   Updated: 2025/10/30 19:40:29 by marvreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int main(void)
{
	int x = 20;
	int y = 10;

	printf("El valor original: x = %d, y = %d\n", x, y);
        ft_swap(&x, &y);
        printf("El valor cambiado: x = %d, y = %d\n", x, y);
	return 0;
}*/
