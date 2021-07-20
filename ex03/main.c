#include <stdio.h>
#include <stdlib.h>

int ft_count_if(char **tab, int length, int(*f)(char*));

int	ft_f(char *str)
{
	if (str[0] == 's')
		return (1);
	return (0);
}

int	main(void)
{
	char	*tab[5];
	int		res;

	tab[0] = "salut";
	tab[1] = "so";
	tab[2] = "sd";
	tab[3] = NULL;

	res = ft_count_if(tab, 3,ft_f);
	printf("%d\n", res);
}
