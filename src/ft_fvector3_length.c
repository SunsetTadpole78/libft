/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fvector3_length.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:13:12 by lroussel          #+#    #+#             */
/*   Updated: 2025/05/20 11:17:49 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

float	ft_fvector3_length(t_fvector3 v)
{
	return (sqrtf(v.x * v.x + v.y * v.y + v.z * v.z));
}
