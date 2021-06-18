#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	src[15];

	src[0] = 'o';
	src[1] = 'i';
	src[2] = ',';
	src[3] = ' ';
	src[4] = 't';
	src[5] = 'd';
	src[6] = '?';
	src[7] = '4';
	src[8] = 'P';
	src[9] = ';';
	src[10] = ' ';
	src[11] = 'c';
	src[12] = '+';
	src[13] = 'u';
	src[14] = '\0';
	printf("retorno: %s\n", ft_strcapitalize(src));
}
