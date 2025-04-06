/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_extension.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:47:46 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/06 17:52:25 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_extension(char *file_name)
{
	int	len;
	int	i;

	if (!file_name)
		return (NULL);
	len = ft_strlen(file_name);
	i = len - 1;
	while (i >= 0 && file_name[i] != '.')
		i--;
	if (i < 0)
		return (NULL);
	return (ft_substr(file_name, i + 1, len - i - 1));
}
