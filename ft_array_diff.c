/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_diff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:36:37 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/21 11:03:34 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Return key of first difference between arrays.
 *
 * @param t_array	*array: Array's adress.
 * @param void		*value: Value who will be added on the array.
 *
 * @return			int : Return key of first difference between arrays.
 */
int	ft_array_diff(t_array *array1, t_array *array2)
{
	int		i;
	void	*v1;
	void	*v2;

	if (array1->type != array2->type)
		return (-1);
	i = 0;
	while (i < array1->size && i < array2->size)
	{
		v1 = (char *)array1->content + (i * array->element_size);
		v2 = (char *)array2->content + (i * array->element_size);
		if (array1->type)
		{
			if (ft_strncmp(
					*(char **)v1,
					*(char **)v2,
					ft_min(ft_strlen(*(char **)v1), ft_strlen(*(char **)v2)) + 1
				) != 0)
				break ;
		}
		else if (ft_memcmp(v1, v2, sizeof(array->element_size)) != 0)
			break ;
		i++;
	}
	return (i);
}
