#include <stdio.h>

void	ft_map(int *tab, int length, int(*f)(int));

int	ft_print(int nbr)
{
	return (-nbr);
}

int	main(void)
{
	int	tab[] = {1, 2, -3, 4, 5};

	ft_map(tab, 5, ft_print);
	printf("%d, %d, %d\n", tab[1], tab[2], tab[3]);
}
