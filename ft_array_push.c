/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:28:35 by lroussel         #+#       #+#           */
/*   Updated: 2025/03/21 10:50:10 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Push one onto the end of array.
 *
 * @param t_array	*array: Array's adress.
 * @param void		*value: Value who will be added on the array.
 *
 * @return			int : Return the new number of elements in the array.
 */
int	ft_array_push(t_array *array, void *value)
{
	array->content = ft_realloc(
			array->content,
			array->element_size * array->size,
			array->element_size * (array->size + 1)
			);
	if (!array->content)
		return (array->size);
	ft_memcpy(
		(char *)array->content + (array->size * array->element_size),
		value,
		array->element_size
		);
	array->size++;
	return (array->size);
}
