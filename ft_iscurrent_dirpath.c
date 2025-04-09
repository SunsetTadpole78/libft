/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscurrent_dirpath.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 00:07:06 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/10 00:20:59 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iscurrent_dirpath(char *path)
{
	int	i;
	int	find_dot;

	if (!path)
		return (0);
	i = 0;
	find_dot = 0;
	while (path[i])
	{
		while (path[i] && path[i] == '/')
			i++;
		if (!path[i])
			return (find_dot);
		if (path[i] != '.' || path[i + 1] == '.')
			return (0);
		i++;
		find_dot = 1;
	}
	return (1);
}
