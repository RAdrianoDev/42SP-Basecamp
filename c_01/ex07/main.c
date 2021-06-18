#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5];
	int	size;

	size = 5;
	tab[0] = 5;
	tab[1] = 4;
	tab[2] = 3;
	tab[3] = 2;
	tab[4] = 1;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
