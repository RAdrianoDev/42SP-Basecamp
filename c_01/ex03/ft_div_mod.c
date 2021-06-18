#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
	{
		write (2, "Division with value 0 is not accepted.\n", 40);
	}
	else
	{
		*div = a / b;
		*mod = a % b;
	}
}
