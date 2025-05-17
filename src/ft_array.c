/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:06:54 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/26 12:22:03 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Create an array.
 *
 * @return	t_array *: Return new array.
 */
t_array	ft_array(void)
{
	t_array	array;

	array = malloc(sizeof(void *) * 2);
	if (!array)
		return (NULL);
	array[0] = malloc(sizeof(int));
	if (!array[0])
	{
		free(array);
		return (NULL);
	}
	*((int *)array[0]) = 0;
	return (array + 1);
}
