#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[4] = "123";
	char s2[5] = "123a";

	printf("\"123\" = \"123a\" = %d\n", ft_strncmp(s1, s2, 3));
	printf("\"123\" = \"123a\" = %d\n", strncmp(s1, s2, 3));

	printf("\"123\" < \"123a\" = %d\n", ft_strncmp(s1, s2, 4));
	printf("\"123\" < \"123a\" = %d\n", strncmp(s1, s2, 4));

	char s3[4] = "123";
	char s4[4] = "123";
	printf("\"123\" < \"123\" = %d\n", ft_strncmp(s3, s4, 6));
	printf("\"123\" < \"123\" = %d\n", strncmp(s3, s4, 6));
}
