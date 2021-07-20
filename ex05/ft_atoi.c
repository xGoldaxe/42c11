/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:07:15 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/19 16:07:18 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int number, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < power)
	{
		result = result * number;
		i++;
	}
	return (result);
}

int	ft_base_to_int(char value, char *base)
{
	int	i;

	i = 0;
	while (value != base[i])
	{
		i++;
	}
	return (i);
}

int	str_to_int(char *str, int size, char *base)
{
	int	result;
	int	i;
	int	base_s;

	result = 0;
	i = 0;
	while (i < size)
	{
		base_s = 0;
		while (base[base_s] != '\0')
		{
			base_s++;
		}
		result += ft_base_to_int(str[i], base) * ft_pow(base_s, size - 1 - i);
		i++;
	}
	return (result);
}

int	str_contain_char(char value_to_test, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == value_to_test)
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int		i;
	int		number_of_minus;
	int		start_number;
	int		result;
	char	*base;

	base = "0123456789";
	number_of_minus = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\n')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			number_of_minus++;
		i++;
	}
	start_number = i;
	while (str_contain_char(str[i], base))
		i++;
	result = str_to_int(&str[start_number], i - start_number, base);
	if (number_of_minus % 2 == 0)
		return (result);
	return (-result);
}
