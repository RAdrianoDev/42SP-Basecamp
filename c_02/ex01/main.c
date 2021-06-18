#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

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
	printf("dest: %s\nretorno: %s\n", dest,
		ft_strncpy(dest, "HereTheEnd1dasdasdasdasdasd", 10));
	return (0);
}
