#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("\"\" %d\n", ft_str_is_printable(""));
	printf("\"ASD\" %d\n", ft_str_is_printable("ASD"));
	printf("\"aSd \" %d\n", ft_str_is_printable("aSd "));
	printf("\"aSd\\a\" %d\n", ft_str_is_printable("aSd\a"));
	printf("\"as1\\t\" %d\n", ft_str_is_printable("aS1\t"));
}
