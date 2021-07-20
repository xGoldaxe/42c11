/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:08:19 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/20 17:01:41 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	test_base_validity(char *base)
{
	int	i;
	int	y;
	int	presence;

	i = 0;
	while (base[i] != '\0')
	{
		presence = 0;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		y = 0;
		while (base[y] != '\0')
		{
			if (base[i] == base[y])
				presence++;
			y++;
		}
		if (presence > 1)
			return (0);
		i++;
	}
	if (i > 1)
		return (1);
	return (0);
}

void	recu_putnbr_base(int nbr, char *base)
{	
	int	modulo;
	int	division;
	int	base_size;

	base_size = ft_strlen(base);
	division = nbr / base_size;
	modulo = nbr % base_size;
	if (division != 0)
	{
		recu_putnbr_base(division, base);
	}
	write(1, &base[-modulo], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!test_base_validity(base))
		return ;
	if (nbr >= 0)
		nbr = -nbr;
	else
		write(1, "-", 1);
	recu_putnbr_base(nbr, base);
	write(1, "\n", 1);
}
