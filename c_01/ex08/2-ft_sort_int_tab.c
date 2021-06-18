#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	m;

	i = 0;
	m = i + 1;
	while (i < size)
	{
		if (tab[i] > tab[m])
		{
			j = tab[i];
			tab[i] = tab[m];
			tab[m] = j;
			i = 0;
			m = i + 1;
		}
		else
		{
			i = i + 1;
			m = i + 1;
		}
	}
}

int	main(void)
{
	int tab;
	int size;

	int	tab[5] = {4, 2, 5, 1, 3};
	int	size = 5;

	ft_sort_int_tab(tab, 5);
	int	i;

	for (i = 0; i < size; i++)
	{
		printf("%d\n", tab[i]);
	}
	return (0);
}
