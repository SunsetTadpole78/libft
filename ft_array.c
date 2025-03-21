/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:06:54 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/20 16:18:55 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Create an array.
 *
 * @param t_array_type	type: Array's enum type.
 * @param int			element_size: size of array values.
 */
t_array	*ft_array(t_array_type type, int element_size)
{
	t_array	*array;

	array = malloc(sizeof(t_array));
	if (!array)
		return (NULL);
	array->type = type;
	array->size = 0;
	array->element_size = element_size;
	array->content = NULL;
	return (array);
}
