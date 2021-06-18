#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("\"\" %d\n", ft_str_is_lowercase(""));
	printf("\"asd\" %d\n", ft_str_is_lowercase("asd"));
	printf("\"aSd\" %d\n", ft_str_is_lowercase("aSd"));
	printf("\"as1\" %d\n", ft_str_is_lowercase("aS1"));
}
