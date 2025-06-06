/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:05:12 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/23 12:10:56 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	ft_vector3(int x, int y, int z)
{
	t_vector3	v3;

	v3.x = x;
	v3.y = y;
	v3.z = z;
	return (v3);
}
