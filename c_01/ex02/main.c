#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 24;
	b = 42;
	printf("a:%d b:%d \n", a, b);
	ft_swap(&a, &b);
	printf("a:%d b:%d \n", a, b);
	return (0);
}
