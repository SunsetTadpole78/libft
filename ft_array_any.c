/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_any.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:04:39 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/26 14:04:03 by lroussel         ###   ########.fr       */
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
int	ft_array_any(t_array *array, int (*callback)(int key, void *value))
{
	void	**metadata;
	int		i;

	metadata = *array - 1;
	i = 0;
	while (i < *((int *)metadata[0]))
	{
		if (callback(i, metadata[i + 1]))
			return (1);
		i++;
	}
	return (0);
}
