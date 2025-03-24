/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:05:15 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/24 11:20:21 by lroussel         ###   ########.fr       */
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
void	ft_unset(t_array *array, void (*del)(int, void *))
{
	int	i;

	i = 0;
	while (i < array->size)
	{
		del(i, (char *)array->content + (i * array->element_size));
		i++;
	}
	free(array->content);
	free(array);
	array = NULL;
}
