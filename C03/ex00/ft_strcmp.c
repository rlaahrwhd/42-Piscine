/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 21:16:46 by mokim             #+#    #+#             */
/*   Updated: 2024/07/10 22:48:39 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

int	ft_testpm(char *s1, char *s2, int i)
{
	if (s1[i] > s2[i])
		return (1);
	else
		return (-1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	n;

	i = 0;
	n = ft_strlen(s1);
	while (i <= n)
	{
		if (s1[i] == s2[i])
			;
		else
			return (ft_testpm(s1, s2, i));
		i++;
	}
	return (0);
}
