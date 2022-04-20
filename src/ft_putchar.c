
#include <unistd.h>

void	ft_putchar(char c, int *result)
{
	write(1, &c, 1);
	(*result)++;
}