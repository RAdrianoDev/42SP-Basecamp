#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("\"\" %d\n", ft_str_is_uppercase(""));
	printf("\"ASD\" %d\n", ft_str_is_uppercase("ASD"));
	printf("\"aSd\" %d\n", ft_str_is_uppercase("aSd"));
	printf("\"as1\" %d\n", ft_str_is_uppercase("aS1"));
}
