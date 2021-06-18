void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	*src;

	src = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol\tlol\n ";
	ft_print_memory(src, 92);
	return (0);
}
