#include <stdio.h>
#include <stdlib.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int	ft_f(int n1, int n2)
{
	return (n2 - n1);
}

int	main(void)
{
	int	tab[10] = {1, 2, 3, 6, 5};
	int		res;

	res = ft_is_sort(tab, 5, ft_f);
	printf("%d\n", res);
}
