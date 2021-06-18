#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[13] = "aaaaaaaAaaaa";
	char s2[14] = "aaaaaaaaaAaaa";
	printf("\"Alberto\" < \"dsa\" = %d\n", ft_strcmp(s1, s2));
	printf("\"Alberto\" < \"dsa\" = %d\n", strcmp(s1, s2));
	char s3[8] = "Alberto";
	char s4[4] = "dsa";
	printf("\"Alberto\" < \"dsa\" = %d\n", ft_strcmp(s3, s4));
	printf("\"Alberto\" < \"dsa\" = %d\n", strcmp(s3, s4));
	char s5[8] = "Alberto";
	char s6[10] = "Albertand";
	printf("\"Alberto\" < \"Albertand\" = %d\n", ft_strcmp(s5, s6));
	printf("\"Alberto\" < \"Albertand\" = %d\n", strcmp(s5, s6));
	char s7[8] = "dsa";
	char s8[10] = "asd";
	printf("\"dsa\" > \"asd\" = %d\n", ft_strcmp(s7, s8));
	printf("\"dsa\" > \"asd\" = %d\n", strcmp(s7, s8));
}
