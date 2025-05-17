/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:46:29 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/11 14:25:46 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Add value in the array at the index position.
 *
 * @param t_array	*array: Array's adress.
 * @param int		index: New value's index;
 * @param void		*value: Value who will be added on the array.
 *
 * @return			int : Return the new number of elements in the array.
 */
int	ft_array_add(t_array *array, int index, void *value)
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
		new[i + ((i - 1) >= index)] = metadata[i];
		i++;
	}
	free(metadata);
	new[index + 1] = value;
	(*((int *)new[0]))++;
	*array = new + 1;
	return (*((int *)new[0]));
}
