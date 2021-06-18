#include <unistd.h>

int	ft_strlen(char *str)
{
	int	letters;

	letters = 0;
	while (str[letters])
		letters++;
	return (letters);
}
