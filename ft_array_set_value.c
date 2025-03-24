/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_set_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:21:05 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/24 13:59:08 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Replace a value on array.
 *
 * @param t_array	*array: Array's adress.
 * @param int		key: Index of the value that will be replaced.
 * @param void		*value: Value who will replace other on the array.
 * @param void		(*del)(int key, void *value): function called when the
 * value is destroyed.
 */
void	ft_array_set_value(t_array *array, int key, void *value,
	void (*del)(int, void *))
{
	if (key < 0 || key >= array->size)
		return ;
	del(key, (char *)array->content + (key * array->element_size));
	ft_memcpy(
		(char *)array->content + (key * array->element_size),
		value,
		array->element_size
		);
}
