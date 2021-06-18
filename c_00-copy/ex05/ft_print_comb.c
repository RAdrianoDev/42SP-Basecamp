#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_score(char hundred, char ten, char unity)
{
	ft_putchar(hundred);
	ft_putchar(ten);
	ft_putchar(unity);
	if (hundred == '7' && ten == '8' && unity == '9')
	{
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	unity;

	hundred = '0';
	while (hundred <= '7')
	{
		ten = hundred + 1;
		while (ten <= '8')
		{
			unity = ten + 1;
			while (unity <= '9')
			{
				ft_score(hundred, ten, unity);
				unity++;
			}
			ten++;
		}
		hundred++;
	}
}
