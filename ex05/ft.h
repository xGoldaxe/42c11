#ifndef FT_H
# define FT_H

# include <unistd.h>

# define BASE "0123456789"

void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_putnbr_base(int nbr, char *base);
char	get_operator(char *oprtori);
int		ft_strpos(char c, char *charset);
int		ft_strlen(char *str);
int		ft_plus(int a, int b, int *error);
int		ft_minus(int a, int b, int *error);
int		ft_divide(int a, int b, int *error);
int		ft_multiply(int a, int b, int *error);
int		ft_modulo(int a, int b, int *error);

#endif
