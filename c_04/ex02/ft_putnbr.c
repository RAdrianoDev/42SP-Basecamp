#include <unistd.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	vector[10];
	int		i;

	i = 0;
	if (nb == 0)
		ft_putchar('0');
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	while (nb > 0)
	{
		vector[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	while (i != 0)
		ft_putchar(vector[--i]);
}
