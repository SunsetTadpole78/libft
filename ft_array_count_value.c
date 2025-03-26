/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_count_value.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:18:39 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/26 13:50:03 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
 * Counts the occurrences of a distinct value in an array.
 *
 * @param t_array	*array: Array's adress.
 * @param void		*value: Value that is counted..
 *
 * @return			int: Return the number of times the value is in the array.
 */
int	ft_array_count_value(t_array *array, void *value)
{
	void	**metadata;
	int		i;
	int		count;

	metadata = *array - 1;
	i = 1;
	count = 0;
	while (i <= *((int *)metadata[0]))
	{
		printf("size %li %li\n", sizeof(metadata[i]), sizeof(value));
		if (metadata[i] == value)
			count++;
		i++;
	}
	return (count);
}
