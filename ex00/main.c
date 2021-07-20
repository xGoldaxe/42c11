#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_print(int nbr)
{
	printf("%d\n", -nbr);
}

int	main(void)
{
	int	tab[] = {1, 2, -3, 4, 5};

	ft_foreach(tab, 5, ft_print);
}
