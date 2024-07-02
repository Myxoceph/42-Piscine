/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:55:17 by abakirca          #+#    #+#             */
/*   Updated: 2023/09/02 20:14:21 by abakirca         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	x;

	x = 'a';
	while (x <= 'z')
	{
		write (1, &x, 1);
		x++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}
*/
