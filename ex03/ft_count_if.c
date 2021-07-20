/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:31:54 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/19 15:35:34 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	score;

	score = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			score++;
		i++;
	}
	return (score);
}
