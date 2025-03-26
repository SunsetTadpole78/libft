/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_unshift.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 10:29:01 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/26 12:46:05 by lroussel         ###   ########.fr       */
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
	void	**metadata;
	int		size;
	void	**new;
	int		i;

	metadata = *array - 1;
	size = *(int *)metadata[0];
	new = malloc(sizeof(void *) * (size + 2));
	if (!new)
		return (-1);
	new[0] = ((int *)metadata[0]);
	i = 1;
	while (i <= size)
	{
		new[i + 1] = metadata[i];
		i++;
	}
	free(metadata);
	new[1] = value;
	(*((int *)new[0]))++;
	*array = new + 1;
	return (*((int *)new[0]));
}
