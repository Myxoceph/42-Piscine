/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:43:56 by abakirca          #+#    #+#             */
/*   Updated: 2023/09/06 20:01:09 by abakirca         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	t;

	t = 0;
	while (t < size)
	{
		tmp = tab[t];
		tab[t] = tab [size - 1];
		tab[size - 1] = tmp;
		size--;
		t++;
	}
}
