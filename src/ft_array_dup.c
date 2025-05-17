/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:12:49 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/04 11:34:37 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Duplicate the array.
 *
 * @param t_array	array: Array that will be duplicated.
 *
 * @return			t_array : Returns the new array.
 */
t_array	ft_array_dup(t_array array)
{
	t_array	dup;
	int		i;
	int		size;

	dup = ft_array();
	i = 0;
	size = ft_array_count(array);
	while (i < size)
	{
		ft_array_push(&dup, array[i]);
		i++;
	}
	return (dup);
}
