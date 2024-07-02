/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:04:34 by abakirca          #+#    #+#             */
/*   Updated: 2023/09/21 18:00:19 by abakirca         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	j;

	if (min >= max)
		return (0);
	i = 0;
	j = max - min;
	arr = (int *)malloc(j * sizeof(int));
	if (!arr)
		return (0);
	while (i < j)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
