/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 19:38:00 by abakirca          #+#    #+#             */
/*   Updated: 2023/09/02 20:36:23 by abakirca         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar ((a / 10) + '0');
			ft_putchar ((a % 10) + '0');
			ft_putchar (' ');
			ft_putchar ((b / 10) + '0');
			ft_putchar ((b % 10) + '0');
			if (a != 98)
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
