#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[8] = "1234";
	char	src[4] = "567";
	printf("ft_strcat(\"1234\", \"567\") = %s %s\n", ft_strcat(dest, src), dest);
	char	dest1[8] = "1234";
	char	src1[4] = "567";
	printf("   strcat(\"1234\", \"567\") = %s %s\n\n", strcat(dest1, src1), dest1);
	char	dest2[8] = "1234";
	char	src2[5] = "567";
	printf("ft_strcat(\"1234\", \"5678\") = %s %s\n", ft_strcat(dest2, src2), dest2);
	char	dest3[8] = "1234";
	char	src3[5] = "567";
	printf("   strcat(\"1234\", \"5678\") = %s %s\n", strcat(dest3, src3), dest3);
}
