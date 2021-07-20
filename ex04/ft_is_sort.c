/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:36:51 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/19 17:30:38 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort_direction(int *tab, int length, int(*f)(int, int), int dir)
{
	int	i;

	i = 0;
	while (i < (length - 1))
	{
		if (dir == 1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
		}
		else
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	if (ft_is_sort_direction(tab, length, f, 1)
		|| ft_is_sort_direction(tab, length, f, 0))
		return (1);
	return (0);
}
