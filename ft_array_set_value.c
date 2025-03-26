/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_set_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:21:05 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/26 14:05:29 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Replace a value on array.
 *
 * @param t_array	*array: Array's adress.
 * @param int		key: Index of the value that will be replaced.
 * @param void		*value: Value who will replace other on the array.
 *
 * @return void		*: Value who was replaced.
 */
void	*ft_array_set_value(t_array *array, int key, void *value)
{
	void	**metadata;
	void	*replaced;

	metadata = *array - 1;
	if (key < 0 || key >= *(int *)metadata[0])
		return (NULL);
	replaced = metadata[key + 1];
	metadata[key + 1] = value;
	return (replaced);
}
