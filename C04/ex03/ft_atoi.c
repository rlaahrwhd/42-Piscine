/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:30:57 by mokim             #+#    #+#             */
/*   Updated: 2024/07/14 18:57:11 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nums(char *str, int i)
{
	int	a;
	int	reslut;

	a = 1;
	reslut = 0;
	while (!(str[i] >= 48 && str[i] <= 57))
	{
		if (str[i] == '-')
			a *= -1;
		if ((str[i] >= 58 || str[i] <= 42) || str[i] == 47 || \
				str[i] == 46 || str[i] == 44)
			return (0);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		reslut = reslut * 10 + (str[i] - '0');
		i++;
	}
	return (a * reslut);
}

int	ft_atoi(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != 32 && !(str[i] >= 9 && str[i] <= 13))
		{
			return (ft_nums(str, i));
		}
		i++;
	}
	return (0);
}
