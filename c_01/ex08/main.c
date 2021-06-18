#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[10];
	int	size;

	size = 10;
	tab[0] = 100;
	tab[1] = 3;
	tab[2] = 4;
	tab[3] = 0;
	tab[4] = 5;
	tab[5] = 8;
	tab[6] = 50;
	tab[7] = 40;
	tab[8] = 38;
	tab[9] = 59;
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", tab[0],
		tab[1], tab[2], tab[3], tab[4], tab[5],
		tab[6], tab[7], tab[8], tab[9]);
	return (0);
}
