/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_unset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:05:15 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/26 14:03:57 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * .Unset a given array.
 *
 * @param t_array	*array: Array's adress.
 * @param void		(*del)(int key, void *value): function called when each
 * value is destroyed.
 */
void	ft_array_unset(t_array *array, void (*del)(int, void *))
{
	void	**metadata;
	int		i;

	metadata = *array - 1;
	i = 0;
	while (i < *((int *)metadata[0]))
	{
		del(i, metadata[i + 1]);
		metadata[i + 1] = NULL;
		i++;
	}
	free(((int *)metadata[0]));
	metadata[0] = NULL;
	free(metadata);
	metadata = NULL;
	array = NULL;
}
