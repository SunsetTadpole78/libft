/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_extension.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:33:27 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/06 17:44:55 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_remove_extension(char *name)
{
	int	i;

	if (!name)
		return (NULL);
	i = ft_strlen(name) - 1;
	while (i >= 0 && name[i] != '.')
		i--;
	if (i < 0)
		return (ft_strdup(name));
	return (ft_substr(name, 0, i));
}
