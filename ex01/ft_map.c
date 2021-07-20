/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:12:57 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/19 15:17:49 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		tab[i] = f(tab[i]);
		i++;
	}
	return (tab);
}
