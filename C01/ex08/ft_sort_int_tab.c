/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:45:00 by abakirca          #+#    #+#             */
/*   Updated: 2023/09/06 19:57:22 by abakirca         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	t;
	int	c;

	c = 0;
	while (c <= size)
	{
		t = 1;
		while (t < size)
		{
			if (tab[t - 1] > tab[t])
			{
				tmp = tab [t - 1];
				tab [t - 1] = tab[t];
				tab [t] = tmp;
			}
			t++;
		}
		size--;
		c++;
	}
}
