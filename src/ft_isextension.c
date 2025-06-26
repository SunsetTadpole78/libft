/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_extension.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 10:27:05 by lroussel          #+#    #+#             */
/*   Updated: 2025/06/26 10:54:10 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isextension(char *path, char *extension)
{
	int	len;
	int	dot;
	int	extension_len;

	len = ft_strlen(path);
	dot = extension[0] == '.';
	extension_len = ft_strlen(extension);
	if (len < (extension_len + dot)
		|| (!dot && (path + (len - extension_len - 1))[0] != '.'))
		return (0);
	return (ft_strncmp(
			path + (len - extension_len),
			extension,
			extension_len + 1
		) == 0);
}
