#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[15];
	char	src[4];

	src[0] = 'R';
	src[1] = 'a';
	src[2] = 'f';
	src[3] = '\0';
	dest[10] = 'E';
	dest[11] = 'r';
	dest[12] = 'r';
	dest[13] = 'o';
	dest[14] = 'r';
	printf("dest: %s\nretorno: %d\n", dest,
		ft_strlcpy(dest, src, 20));
	return (0);
}
