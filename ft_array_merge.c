/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_merge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:11:15 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/04 11:35:33 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Merge two arrays.
 *
 * @param t_array	array: First array.
 * @param t_array	array: Second array.
 *
 * @return			t_array : Returns the resulting array.
 */
t_array	ft_array_merge(t_array array1, t_array array2)
{
	t_array	merged;
	int		i;
	int		size;

	merged = ft_array_dup(array1);
	i = 0;
	size = ft_array_count(array2);
	while (i < size)
	{
		ft_array_push(&merged, array2[i]);
		i++;
	}
	return (merged);
}
