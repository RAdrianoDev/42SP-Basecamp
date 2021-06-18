#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	src[15];

	src[0] = 'R';
	src[1] = 'A';
	src[2] = 'F';
	src[3] = '1';
	src[4] = ' ';
	src[5] = '\a';
	src[6] = 'f';
	src[7] = '\0';
	printf("retorno: %s\n", ft_strlowcase(src));
}
