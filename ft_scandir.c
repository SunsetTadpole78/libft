/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scandir.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 03:51:57 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/27 04:23:27 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "dirent.h"

static void	sort_array(t_array *array, t_sorting_order sorting_order)
{
	int	i;
	int	j;
	int	size;
	int	res;

	if (sorting_order == SCANDIR_SORT_NONE)
		return ;
	i = 0;
	j = 0;
	size = ft_array_count(*array);
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			res = ft_strncmp((char *)(*array)[i],
					(char *)(*array)[j], ft_strlen((char *)(*array)[i]));
			if ((sorting_order == SCANDIR_SORT_DESCENDING && res > 0)
				|| (sorting_order == SCANDIR_SORT_ASCENDING && res < 0))
				ft_array_swap(array, i, j);
			j++;
		}
		i++;
	}
}

t_array	ft_scandir(char *path, t_sorting_order sorting_order,
		int hidden_files, int dir_path)
{
	DIR				*dir;
	t_array			array;
	struct dirent	*entry;

	dir = opendir(path);
	if (!dir)
		return (ft_array());
	array = ft_array();
	entry = readdir(dir);
	while (entry)
	{
		if (!dir_path && entry->d_name[0] == '.' && (!entry->d_name[1]
				|| (entry->d_name[1] == '.' && !entry->d_name[2])))
		{
			entry = readdir(dir);
			continue ;
		}
		if (hidden_files || entry->d_name[0] != '.')
			ft_array_push(&array, ft_strdup(entry->d_name));
		entry = readdir(dir);
	}
	closedir(dir);
	sort_array(&array, sorting_order);
	return (array);
}
