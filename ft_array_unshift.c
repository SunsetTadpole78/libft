/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_unshift.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 10:29:01 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/26 10:43:04 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Prepend one element to the beginning of an array.
 *
 * @param t_array	*array: Array's adress.
 * @param void		*value: Value who will be added on the array.
 *
 * @return			int : Return the new number of elements in the array.
 */
int	ft_array_unshift(t_array *array, void *value)
{
	int	i;

	if (array->size == 0)
		return (ft_array_push(array, value));
	array->content = ft_realloc(
			array->content,
			array->element_size * array->size,
			array->element_size * (array->size + 1)
			);
	if (!array->content)
		return (array->size);
	i = array->size;
	while (i-- > 0)
		ft_memcpy(
			(char *)array->content + ((i + 1) * array->element_size),
			(char *)array->content + (i * array->element_size),
			array->element_size
			);
	ft_memcpy(
		(char *)array->content,
		value,
		array->element_size
		);
	array->size++;
	return (array->size);
}
