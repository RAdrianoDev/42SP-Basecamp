#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("\"\" %d\n", ft_str_is_alpha(""));
	printf("\"aSd\" %d\n", ft_str_is_alpha("aSd"));
	printf("\"aS1\" %d\n", ft_str_is_alpha("aS1"));
	printf("\"aS!\" %d\n", ft_str_is_alpha("aS!"));
}
