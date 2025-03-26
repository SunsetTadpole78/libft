/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:29:41 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/26 12:30:09 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Counts all elements in an array.
 *
 * @param t_array	*array: Array's adress.
 */
int	ft_array_count(t_array array)
{
	return (*((int **)(array - 1))[0]);
}
