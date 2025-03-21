/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_count_value.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:18:39 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/21 09:48:00 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Counts the occurrences of a distinct value in an array.
 *
 * @param t_array	*array: Array's adress.
 * @param void		*value: Value that is counted..
 */
int	ft_array_count_value(t_array *array, void *value)
{
	int		i;
	int		count;
	void	*content;

	i = 0;
	count = 0;
	while (i < array->size)
	{
		content = (char *)array->content + (i * array->element_size);
		if (array->type == STRING)
			count += ft_strncmp(
					*(char **)content,
					*((char **)value),
					ft_strlen(*(char **)content)
					) == 0;
		else
			count += ft_memcmp(
					content,
					value,
					sizeof(array->element_size)
					) == 0;
		i++;
	}
	return (count);
}
