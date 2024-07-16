/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:31:19 by mokim             #+#    #+#             */
/*   Updated: 2024/07/06 17:56:37 by mokim            ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	int	c;
	int	a;
	int	b;

	c = 0;
	a = ft_strlen(str);
	b = 0;
	while (c < a)
	{
		if (str[c] >= 32 && str[c] <= 126)
			b++;
		c++;
	}
	if (b == a)
		return (1);
	else
		return (0);
}
