/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:43:32 by lroussel          #+#    #+#             */
/*   Updated: 2025/02/26 13:43:34 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*temp;

	if (!new_size)
		new_size = 1;
	temp = malloc(new_size);
	if (!temp)
		return (NULL);
	if (ptr)
	{
		if (old_size < new_size)
			new_size = old_size;
		ft_memcpy(temp, ptr, new_size);
		free(ptr);
	}
	return (temp);
}
