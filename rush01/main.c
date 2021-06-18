#include <unistd.h>
int	str_to_int(char *arg, int tabela[4][4]);

int	main(int argc, char **argv)
{
	int	tabela[4][4];

	if (argc == 2 && str_to_int(argv[1], tabela))
	{
		return (0);
	}
	else
	{
		write (1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	str_to_int(char *arg, int tabela[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (*arg < '1' || *arg > '4')
			{
				return (0);
			}
			else
			{
				tabela[i][j] = *arg - 48;
				arg += 2;
				j++;
			}
			i++;
		}
	}
	return (1);
}
