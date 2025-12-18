/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvreye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:33:47 by marvreye          #+#    #+#             */
/*   Updated: 2025/11/06 16:54:32 by marvreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>

int main(void)
{
	printf("Comparacion \"mar\" y \"mar\" %d\n", ft_strcmp("mar", "mar"));
	printf("Comparacion \"mar\" y \"mal\" %d\n", ft_strcmp("mar", "mal"));
	return (0);
}*/
