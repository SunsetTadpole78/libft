/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:07:04 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/23 12:16:12 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_rgb	ft_rgb(unsigned int r, unsigned int g, unsigned int b)
{
	t_rgb	rgb;

	rgb.r = r % 255;
	rgb.g = g % 255;
	rgb.b = b % 255;
	return (rgb);
}
