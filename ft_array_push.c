/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:28:35 by lroussel         #+#       #+#           */
/*   Updated: 2025/03/26 14:05:01 by lroussel         ###   ########.fr       */
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
	void	**metadata;
	int		size;

	metadata = *array - 1;
	size = *(int *)metadata[0];
	metadata = ft_realloc(
			metadata,
			sizeof(void *) * (size + 1),
			sizeof(void *) * (size + 2)
			);
	if (!metadata)
		return (-1);
	metadata[size + 1] = value;
	(*((int *)metadata[0]))++;
	*array = metadata + 1;
	return (*((int *)metadata[0]));
}
