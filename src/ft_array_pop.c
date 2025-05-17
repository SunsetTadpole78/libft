/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:05:46 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/26 13:17:59 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Counts the occurrences of a distinct value in an array.
 *
 * @param t_array	*array: Array's adress.
 *
 * @return 			void *: Value who was poped.
 */
void	*ft_array_pop(t_array *array)
{
	void	**metadata;
	int		size;
	void	*value;

	metadata = *array - 1;
	size = *(int *)metadata[0];
	value = metadata[size];
	metadata[size] = NULL;
	(*((int *)metadata[0]))--;
	return (value);
}
