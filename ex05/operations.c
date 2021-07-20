#include "ft.h"

int	ft_plus(int a, int b, int *error)
{
	*error = 0;
	return (a + b);
}

int	ft_minus(int a, int b, int *error)
{
	*error = 0;
	return (a - b);
}

int	ft_divide(int a, int b, int *error)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		*error = 1;
		return (-1);
	}
	return (a / b);
}

int	ft_multiply(int a, int b, int *error)
{
	*error = 0;
	return (a * b);
}

int	ft_modulo(int a, int b, int *error)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		*error = 1;
		return (-1);
	}
	return (a % b);
}
