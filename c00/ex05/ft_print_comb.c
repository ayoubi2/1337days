/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayait-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:13:21 by ayait-be          #+#    #+#             */
/*   Updated: 2025/07/16 21:08:54 by ayait-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c, char t, char b)
{
	write(1, &c, 1);
	write(1, &t, 1);
	write(1, &b, 1);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	while (x <= 55)
	{
		y = x + 1;
		while (y <= 56)
		{
			z = y + 1;
			while (z <= 57)
			{
				ft_putchar(x, y, z);
				if (x != 55 || y != 56 || z != 57)
				{
					write(1, ", ", 2);
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
