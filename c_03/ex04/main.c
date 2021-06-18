#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[9] = "Ronaldo";
	printf("%s\n", ft_strstr(str, "nal"));
	char str1[9] = "Ronaldo";
	printf("%s\n", ft_strstr(str1, "Ro"));
	char str2[9] = "Ronaldo";
	printf("%s\n", ft_strstr(str2, "d"));
	char str3[9] = "Ronaldo";
	printf("%s\n", ft_strstr(str3, "z"));
}
