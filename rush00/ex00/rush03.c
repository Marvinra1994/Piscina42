/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbedia-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 11:25:27 by mbedia-l          #+#    #+#             */
/*   Updated: 2025/11/02 23:02:44 by marvreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int a);

void	ft_row_a_z(int x)
{
	int	i;

	i = 2;
	ft_putchar('A');
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_middle(int x)
{
	int	i;

	i = 2;
	ft_putchar('B');
	while (i < x)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0 || x > 2147483647 || y > 2147483647)
		return ;
	i = 2;
	ft_row_a_z(x);
	while (i < y)
	{
		ft_middle(x);
		i++;
	}
	if (y > 1)
	{
		ft_row_a_z(x);
	}
}
