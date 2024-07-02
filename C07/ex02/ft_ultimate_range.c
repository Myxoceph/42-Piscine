/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:07:26 by abakirca          #+#    #+#             */
/*   Updated: 2023/09/21 18:01:28 by abakirca         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		i;
	int		*arr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	arr = malloc(size * sizeof(int));
	if (!arr)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (size);
}
