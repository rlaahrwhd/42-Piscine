/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 00:17:08 by mokim             #+#    #+#             */
/*   Updated: 2024/07/17 11:27:26 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*strnum;
	int	i;
	int	cap;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	strnum = (int *)malloc(sizeof(int) * (max - min));
	if (!strnum)
		return (-1);
	i = 0;
	cap = max - min;
	while (i < cap)
	{
		strnum[i] = min++;
		i++;
	}
	*range = strnum;
	return (i);
}
