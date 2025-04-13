/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_canaccess.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 22:40:17 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/13 23:26:35 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_value(const char *path, int i)
{
	char	*test;

	test = ft_substr(path, 0, i);
	if (!ft_isfile(test) && !ft_isdir(test))
	{
		free(test);
		return (-1);
	}
	if (!ft_isdotpath(test) && access(test, X_OK) != 0)
	{
		free(test);
		return (0);
	}
	free(test);
	return (1);
}

int	ft_canaccess(const char *path)
{
	int	i;
	int	res;

	if (!path)
		return (-1);
	if (!ft_isdotpath(path) && !ft_strchr(path, '/'))
		path = ft_pathjoin(".", path);
	else
		path = ft_strdup(path);
	i = 1;
	while (path[i])
	{
		if (path[i] == '/')
		{
			res = check_value(path, i);
			if (res != 1)
				return (res);
		}
		i++;
	}
	if (!ft_isfile(path) && !ft_isdir(path))
		return (-1);
	return (ft_isdotpath(path) || access(path, X_OK) == 0);
}
