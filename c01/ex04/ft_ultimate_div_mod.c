/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvreye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:48:38 by marvreye          #+#    #+#             */
/*   Updated: 2025/10/30 19:53:34 by marvreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
#include <stdio.h>

int main(void)
{
    int x = 42;
    int y = 5;

    ft_ultimate_div_mod(&x, &y);
    printf("División: %d\n", x);
    printf("Resto: %d\n", y);

    return 0;
}*/
