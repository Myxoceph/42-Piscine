/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:59:23 by abakirca          #+#    #+#             */
/*   Updated: 2023/09/02 20:27:49 by abakirca         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0) 
		write (1, "N", 1);
	else
		write (1, "P", 1);
}
/*
int	main(void)
{
	ft_is_negative(4123);
}
*/
