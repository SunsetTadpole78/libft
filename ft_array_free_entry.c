/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_free_entry.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 07:15:46 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/27 07:21:25 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * .Basic function who free all values.
 *
 * @param int	key: Array value index.
 * @param void	*value: Value who will be destroy.
 */
void	ft_array_free_entry(int key, void *value)
{
	(void)key;
	free(value);
}
