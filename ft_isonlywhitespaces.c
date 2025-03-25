/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isonlywhitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:35:22 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/25 17:39:45 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isonlywhitespaces(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!ft_iswhitespace(s[i]))
			return (0);
		i++;
	}
	return (1);
}
