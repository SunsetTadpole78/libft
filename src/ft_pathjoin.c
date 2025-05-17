/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pathjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:32:22 by lroussel          #+#    #+#             */
/*   Updated: 2025/03/26 16:45:00 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_pathjoin(char const *path1, char const *path2)
{
	char	*result;
	int		have_slash1;
	int		have_slash2;
	int		len;
	char	*temp;

	len = ft_strlen(path1);
	have_slash1 = path1[len - 1] == '/';
	have_slash2 = path2[0] == '/';
	if (have_slash1 && have_slash2)
		temp = ft_substr(path1, 0, len - 1);
	else if (have_slash1 || have_slash2)
		return (ft_strjoin(path1, path2));
	else
		temp = ft_strjoin(path1, "/");
	result = ft_strjoin(temp, path2);
	free(temp);
	return (result);
}
