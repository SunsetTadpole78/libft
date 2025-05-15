/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isoutint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 00:45:13 by lroussel          #+#    #+#             */
/*   Updated: 2025/05/16 01:05:24 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isoutint(char *value)
{
	int			i;
	int			offset;
	int			sign;
	long int	nb;

	if (!value || !value[0])
		return (0);
	i = value[0] == '-' || value[0] == '+';
	if (i == 1 && value[0] == '-')
		sign = -1;
	else
		sign = 1;
	offset = 0;
	while (value[i + offset] && value[i + offset] == '0')
		offset++;
	i += offset;
	nb = 0;
	while (value[i] && value[i] >= '0' && value[i] <= '9' && (i - offset) <= 11)
	{
		nb = nb * 10 + (value[i] - '0');
		i++;
	}
	nb *= sign;
	return (nb < MIN_INT || nb > MAX_INT);
}
