#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	letters;

	letters = 0;
	while (str[letters] != '\0')
	{
		ft_putchar(str[letters]);
		letters++;
	}
}
