/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:04:54 by lroussel          #+#    #+#             */
/*   Updated: 2025/05/14 15:28:00 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_atof(char *nptr)
{
	int			i;
	short int	s;
	float			result;
	int			j;

	i = 0;
	s = 1;
	result = 0;
	while (ft_iswhitespace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			s = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	if (nptr[i] == '.')
	{
		i++;
		j = 1;
		while (nptr[i] >= '0' && nptr[i] <= '9')
		{
			result += ((nptr[i] - '0') * ft_powf(0.1, j));
			j++;
			i++;
		}
	}
	return (result * s);
}
