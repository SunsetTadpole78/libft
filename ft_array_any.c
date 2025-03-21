/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_any.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:04:39 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/21 10:54:31 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Checks if at least one array element satisfies a callback function.
 *
 * @param t_array	*array: Array's adress.
 * @param int		(*callback)(void *value, int key): Callback function to call
 * to check each element.
 *
 * @return			int: Return true if there is at least one element for which
 * callback returns true. Otherwise the function returns false.
 */
int	ft_array_any(t_array *array, int (*callback)(void *value, int key))
{
	int	i;

	i = 0;
	while (i < array->size)
	{
		if (callback((char *)array->content + (i * array->element_size), i))
			return (1);
		i++;
	}
	return (0);
}
