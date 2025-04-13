/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:02:47 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/13 22:36:19 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/stat.h>

int ft_isdir(const char *path)
{
	struct stat	infos;

	if (stat(path, &infos) == -1)
		return (0);
	return (infos.st_mode & S_IFMT) == S_IFDIR;
}
