#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[15] = "1234";
	char	src[9] = "567";
	printf("ft_strncat(\"1234\", \"567\", 1) = %s %s\n",
		ft_strncat(dest, src, 1), dest);
	char	dest1[15] = "1234";
	char	src1[9] = "567";
	printf("   strncat(\"1234\", \"567\", 1) = %s %s\n\n",
		strncat(dest1, src1, 1), dest1);
	
	char	dest2[15] = "1234";
	char	src2[9] = "567";
	printf("ft_strncat(\"1234\", \"567\", 10) = %s %s\n",
		ft_strncat(dest2, src2, 10), dest2);
	char	dest3[15] = "1234";
	char	src3[9] = "567";
	printf("   strncat(\"1234\", \"567\", 10) = %s %s\n\n",
		strncat(dest3, src3, 10), dest3);
	
	char	dest4[15] = "1234";
	char	src4[9] = "5678";
	printf("ft_strncat(\"1234\", \"5678\", 2) = %s %s\n",
		ft_strncat(dest4, src4, 2), dest4);
	char	dest5[15] = "1234";
	char	src5[9] = "5678";
	printf("   strncat(\"1234\", \"5678\", 2) = %s %s\n",
		strncat(dest5, src5, 2), dest5);
}
