/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbag <marbag@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:02:30 by marbag            #+#    #+#             */
/*   Updated: 2023/09/03 18:02:50 by marbag           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	show_error(void);

void	ft_print_row(int len, char ilk, char orta, char son)
{
	int	x_index;

	x_index = 1;
	while (x_index <= len)
	{
		if (x_index == 1)
			ft_putchar(ilk);
		else if (x_index == len)
			ft_putchar(son);
		else
			ft_putchar(orta);
		x_index++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	y_index;

	y_index = 1;
	if (x >= 1 && y >= 1)
	{
		while (y_index <= y)
		{
			if (y_index == 1)
				ft_print_row(x, 'A', 'B', 'C');
			else if (y_index == y)
				ft_print_row(x, 'C', 'B', 'A');
			else 
				ft_print_row(x, 'B', ' ', 'B');
			y_index++;
		}
	}
	else
	{
		show_error();
	}
}
