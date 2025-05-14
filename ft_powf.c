/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:20:29 by lroussel          #+#    #+#             */
/*   Updated: 2025/05/14 15:27:09 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	ft_powf(float x, float y)
{
	int	i;
	float	result;

	if (y < 0.0f)
		return (0.0f);
	i = 0;
	result = 1.0f;
	while (i < y)
	{
		result *= x;
		i++;
	}
	return (result);
}
