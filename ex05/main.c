/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:43:52 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/19 17:16:14 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int		operator;
	int		result;
	int		error_value;
	int		*error;
	int		(*operations[5])(int a, int b, int *error);

	error_value = 0;
	error = &error_value;
	operations[0] = ft_plus;
	operations[1] = ft_minus;
	operations[2] = ft_divide;
	operations[3] = ft_multiply;
	operations[4] = ft_modulo;
	if (argc != 4)
		return (0);
	operator = get_operator(argv[2]);
	if (operator == -1)
	{
		ft_putnbr_base(0, BASE);
		return (0);
	}
	result = (operations[operator](ft_atoi(argv[1]), ft_atoi(argv[3]), error));
	if (*error == 0)
		ft_putnbr_base(result, BASE);
}
