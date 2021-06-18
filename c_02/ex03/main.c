#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("\"\" %d\n", ft_str_is_numeric(""));
	printf("\"012\" %d\n", ft_str_is_numeric("012"));
	printf("\"aS1\" %d\n", ft_str_is_numeric("aS1"));
	printf("\"aS!\" %d\n", ft_str_is_numeric("aS!"));
}
