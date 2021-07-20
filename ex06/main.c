#include <stdio.h>
#include <stdlib.h>

void ft_sort_string_tab(char **tab);

int	main(int argc, char **argv)
{
	(void) argc;
	ft_sort_string_tab(argv);
	printf("%s, %s, %s, %s\n", argv[0], argv[1], argv[2], argv[3]);
}
