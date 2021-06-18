#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_score(int numbera, int numberb)
{
	ft_putchar('0' + numbera / 10);
	ft_putchar('0' + numbera % 10);
	ft_putchar(' ');
	ft_putchar('0' + numberb / 10);
	ft_putchar('0' + numberb % 10);
	if (numbera <= 97 )
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	numbera;
	int	numberb;

	numbera = 0;
	while (numbera <= 98)
	{
		numberb = numbera + 1;
		while (numberb <= 99)
		{
			ft_score(numbera, numberb);
			numberb++;
		}
		numbera++;
	}
}
