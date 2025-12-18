/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvreye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:59:42 by marvreye          #+#    #+#             */
/*   Updated: 2025/11/19 12:12:04 by marvreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!*to_find)
		return (str);
	i = 0;
	while (*str != '\0')
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
		{
			j++;
		}
		if (!to_find[j])
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>


int main(void)
{
    char str1[] = "Hola mundo, este es un ejemplo";
    char str2[] = "mundo";
    char str3[] = "ejemplo";
    char str4[] = "noesta";
    char str5[] = "";
    char to_find_empty[] = "";

    printf("Prueba 1: Buscar '%s' en '%s'\n", str2, str1);
    printf("strstr:     %s\n", strstr(str1, str2));
    printf("ft_strstr:  %s\n\n", ft_strstr(str1, str2));

    printf("Prueba 2: Buscar '%s' en '%s'\n", str3, str1);
    printf("strstr:     %s\n", strstr(str1, str3));
    printf("ft_strstr:  %s\n\n", ft_strstr(str1, str3));

    printf("Prueba 3: Buscar '%s' en '%s'\n", str4, str1);
    printf("strstr:     %s\n", strstr(str1, str4));
    printf("ft_strstr:  %s\n\n", ft_strstr(str1, str4));

    printf("Prueba 4: Buscar cadena vacía en '%s'\n", str1);
    printf("strstr:     %s\n", strstr(str1, to_find_empty));
    printf("ft_strstr:  %s\n\n", ft_strstr(str1, to_find_empty));

    printf("Prueba 5: Buscar '%s' en cadena vacía\n", str2);
    printf("strstr:     %s\n", strstr(str5, str2));
    printf("ft_strstr:  %s\n\n", ft_strstr(str5, str2));

    return 0;
}*/
