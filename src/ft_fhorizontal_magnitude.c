/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fhorizontal_magnitude.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:25:31 by lroussel          #+#    #+#             */
/*   Updated: 2025/05/31 13:28:05 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_fhorizontal_magnitude(t_fvector3 v)
{
	return (v.x * v.x + v.z * v.z);
}
