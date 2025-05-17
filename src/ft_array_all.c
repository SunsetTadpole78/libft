/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:22:55 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/26 14:04:11 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Checks if all array elements satisfy a callback function.
 *
 * @param t_array	*array: Array's adress.
 * @param int		(*callback)(void *value, int key): Callback function to call
 * to check each element.
 *
 * @return			int: Return true if callback returns true for all elements.
 * Otherwise the function returns false.
 */
int	ft_array_all(t_array *array, int (*callback)(int key, void *value))
{
	void	**metadata;
	int		i;

	metadata = *array - 1;
	i = 0;
	while (i < *((int *)metadata[0]))
	{
		if (!callback(i, metadata[i + 1]))
			return (0);
		i++;
	}
	return (1);
}
