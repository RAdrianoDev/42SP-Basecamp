#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 23;
	b = 20;
	ft_div_mod(a, b, &div, &mod);
	printf("a:%d b:%d div:%d mod:%d\n", a, b, div, mod);
	return (0);
}
