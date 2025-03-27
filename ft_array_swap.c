/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 02:06:30 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/27 02:20:32 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Swap two values on an array.
 *
 * @param t_array	*array: Array's adress.
 * @param int		key1: Key of first value.
 * @param int		key1: Key of second value.
 */
void	ft_array_swap(t_array *array, int key1, int key2)
{
	void	**metadata;
	void	*tmp;

	if (key1 < 0 || key2 < 0)
		return ;
	metadata = *array - 1;
	if (key1 >= *(int *)metadata[0] || key2 >= *(int *)metadata[0])
		return ;
	tmp = metadata[key1 + 1];
	metadata[key1 + 1] = metadata[key2 + 1];
	metadata[key2 + 1] = tmp;
}
