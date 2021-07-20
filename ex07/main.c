#include <stdio.h>
#include <stdlib.h>

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int	ft_f(char *n1, char *n2)
{
	return (n1[0] - n2[0]);
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_advanced_sort_string_tab(argv, ft_f);
	printf("%s, %s, %s, %s\n", argv[0], argv[1], argv[2], argv[3]);
}
