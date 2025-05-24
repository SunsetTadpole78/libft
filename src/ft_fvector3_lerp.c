/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fvector3_lerp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 01:12:30 by lroussel          #+#    #+#             */
/*   Updated: 2025/05/25 01:14:09 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_fvector3	ft_fvector3_lerp(t_fvector3 v1, t_fvector3 v2, float t)
{
	return ((t_fvector3){
		v1.x * (1.0f - t) + v2.x * t,
		v1.y * (1.0f - t) + v2.y * t,
		v1.z * (1.0f - t) + v2.z * t});
}
