void	ft_putchar(char c);

void	ft_line_fill(char l_border, char middle, char r_border, int n_col)
{	
	char	new_line;
	int		remaining_col;

	new_line = '\n';
	remaining_col = n_col;
	while (remaining_col > 0)
	{
		if (remaining_col == n_col)
		{
			ft_putchar(l_border);
			remaining_col--;
		}
		else if (remaining_col == 1)
		{
			ft_putchar(r_border);
			remaining_col--;
		}
		else
		{
			ft_putchar(middle);
			remaining_col--;
		}
	}
	ft_putchar(new_line);
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	ft_line_fill('/', '*', '\\', x);
	y--;
	while (y > 1)
	{
		ft_line_fill('*', ' ', '*', x);
		y--;
	}
	if (y == 1)
	{
		ft_line_fill('\\', '-', '/', x);
		y--;
	}	
}
