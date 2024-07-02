/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbag <marbag@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:03:06 by marbag            #+#    #+#             */
/*   Updated: 2023/09/03 20:52:41 by abakirca         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	show_error(void)
{
	write(1, "Invalid input!: The value should be higher than 0!\n", 52);
	write(1, "Gecersiz girdi!: Girilen deger 0'dan yuksek olmalidir!\n", 56);
}
