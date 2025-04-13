/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isfile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 22:13:54 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/13 22:38:26 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/stat.h>

int	ft_isfile(const char *path)
{
	struct stat	infos;

	if (stat(path, &infos) == -1)
		return (0);
	return ((infos.st_mode & S_IFMT) == S_IFREG);
}
