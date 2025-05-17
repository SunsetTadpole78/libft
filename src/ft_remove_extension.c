/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_extension.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:33:27 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/06 17:49:07 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_remove_extension(char *file_name)
{
	int	i;

	if (!file_name)
		return (NULL);
	i = ft_strlen(file_name) - 1;
	while (i >= 0 && file_name[i] != '.')
		i--;
	if (i < 0)
		return (ft_strdup(file_name));
	return (ft_substr(file_name, 0, i));
}
