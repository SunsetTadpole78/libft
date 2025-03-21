/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:22:55 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/20 16:25:20 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Checks if all array elements satisfy a callback function.
 *
 * @param t_array	*array: Array's adress.
 * @param int		(*callback)(void *value, int key): Callback function to call
 * to check each element.
 */
int	ft_array_all(t_array *array, int (*callback)(void *value, int key))
{
	int	i;

	i = 0;
	while (i < array->size)
	{
		if (!callback((char *)array->content + (i * array->element_size), i))
			return (0);
		i++;
	}
	return (1);
}
