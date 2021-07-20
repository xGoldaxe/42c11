/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_operator.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:11:08 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/19 17:09:09 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strpos(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	get_operator(char *oprtor)
{
	if (ft_strlen(oprtor) == 1)
	{	
		return (ft_strpos(oprtor[0], "+-/*%"));
	}
	return (-1);
}
