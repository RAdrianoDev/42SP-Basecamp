void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	src[9];

	src[0] = 'L';
	src[1] = 'e';
	src[2] = 'o';
	src[3] = '\t';
	src[4] = 'L';
	src[5] = 'e';
	src[6] = 'o';
	src[7] = '\n';
	src[8] = '\0';
	ft_putstr_non_printable(src);
	return (0);
}
