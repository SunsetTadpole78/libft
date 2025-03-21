/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:05:46 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/20 16:32:13 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Counts the occurrences of a distinct value in an array.
 *
 * @param t_array	*array: Array's adress.
 *
 * @return void		*: Value who was poped.
 */
void	*ft_array_pop(t_array *array)
{
	if (array->size <= 0)
		return (NULL);
	array->size--;
	return ((char *)array->content + (array->size * array->element_size));
}
