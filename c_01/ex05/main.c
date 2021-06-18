#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = "Escreva uma função que mostre um a um os caracteres de uma string .";
	ft_putstr(str);
	printf("\n");
	return (0);
}
