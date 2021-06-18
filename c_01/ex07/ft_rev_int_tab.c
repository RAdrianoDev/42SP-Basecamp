#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	auxiliary;
	int	c;

	index = 0;
	c = size;
	while (index < size)
	{
		auxiliary = tab[index];
		tab[index] = tab[c - 1];
		tab[c - 1] = auxiliary;
		index = index + 1;
		c = c - 1;
		size = size - 1;
	}
}
