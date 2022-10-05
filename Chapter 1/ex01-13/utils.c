#include <unistd.h>
#include "ft_print.h"

int	ft_log10(int num)
{
	int	base;

	base = 0;
	while (num >= 10)
	{
		num /= 10;
		base++;
	}
	return (base);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putline(char*s)
{
	while (*s)
	{
		ft_putchar(*s);
		++s;
	}
}

void	ft_putint(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}

	if (num >= 10)
	{
		ft_putint(num / 10);
		num %= 10;
	}

	ft_putchar(num + '0');
}