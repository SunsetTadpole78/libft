/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_nothing_entry.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <lroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:51:23 by lroussel          #+#    #+#             */
/*   Updated: 2025/04/04 21:52:30 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Basic function who do nothing with values.
 *
 * @param int	key: Array value index.
 * @param void	*value: Value who will be destroy.
 */
void	ft_array_nothing_entry(int key, void *value)
{
	(void)key;
	(void)value;
}
