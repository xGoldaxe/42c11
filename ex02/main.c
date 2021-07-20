#include <stdio.h>
#include <stdlib.h>

int	ft_any(char **tab, int(*f)(char*));

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

	tab[0] = "xalut";
	tab[1] = "yo";
	tab[2] = "xd";
	tab[3] = NULL;

	res = ft_any(tab, ft_f);
	printf("%d\n", res);
}
