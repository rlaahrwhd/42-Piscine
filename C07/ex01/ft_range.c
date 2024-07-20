/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:26:08 by mokim             #+#    #+#             */
/*   Updated: 2024/07/17 11:27:02 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*strnum;
	int	i;
	int	cap;

	i = 0;
	cap = max - min;
	if (min >= max)
		return (NULL);
	strnum = (int *)malloc(sizeof(int) * (max - min));
	while (i < cap)
	{
		strnum[i] = min++;
		i++;
	}
	return (strnum);
}
