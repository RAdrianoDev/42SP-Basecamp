#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	src[15];

	src[0] = 'r';
	src[1] = 'a';
	src[2] = 'f';
	src[3] = 'Z';
	src[4] = ' ';
	src[5] = '\a';
	src[6] = 'f';
	src[7] = '\0';
	printf("retorno: %s\n", ft_strupcase(src));
}
