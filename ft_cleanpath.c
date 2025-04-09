/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cleanpath.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 00:10:47 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/10 00:21:56 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*create_cleaned(int count, char **splited)
{
	char	*cleaned;
	int		i;
	int		j;

	if (count == 0)
		return (ft_strdup(""));
	cleaned = malloc(sizeof(char) * count);
	if (!cleaned)
		return (NULL);
	i = 0;
	j = 0;
	while (splited[i])
	{
		if (splited[i][0] != '.' || splited[i][1])
		{
			ft_memcpy(cleaned + j, splited[i], ft_strlen(splited[i]));
			j += ft_strlen(splited[i]) + 1;
			cleaned[j - 1] = '/';
		}
		free(splited[i]);
		i++;
	}
	cleaned[j - 1] = '\0';
	return (cleaned);
}

char	*ft_cleanpath(char *value)
{
	char	**splited;
	int		i;
	int		count;
	char	*res;

	if (!value)
		return (NULL);
	splited = ft_split(value, '/');
	i = 0;
	count = 0;
	while (splited[i])
	{
		if (splited[i][0] != '.' || splited[i][1])
			count += ft_strlen(splited[i]) + 1;
		i++;
	}
	res = create_cleaned(count, splited);
	free(splited);
	return (res);
}
