/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fnormalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 17:09:17 by lroussel          #+#    #+#             */
/*   Updated: 2025/05/17 14:28:00 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "math.h"

t_fvector3	ft_fnormalize(t_fvector3 v)
{
	float	len;

	len = sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
	if (len == 0.0f)
	{
		v.x = 0.0f;
		v.y = 0.0f;
		v.z = 0.0f;
		return (v);
	}
	v.x /= len;
	v.y /= len;
	v.z /= len;
	return (v);
}
