/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dt_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvreye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:42:09 by marvreye          #+#    #+#             */
/*   Updated: 2025/10/30 21:10:04 by marvreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main(void)
{
    int a = 42;
    int b = 7;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);

    printf("División: %d / %d = %d\n", a, b, div);
    printf("Resto: %d %% %d = %d\n", a, b, mod);

    return 0;
}*/
