#include <unistd.h>

/* Defining	our	own	functions */
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

int	ft_strlen(char *s)
{
	int	l;

	l = 0;
	while (*(s + l))
	{
		++l;
	}

	return (l);
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

int	ft_log10(int num)
{ 
	int base;

	base = 1;
	while(num >= 10)
	{
		num /= 10;
		base++;
	}

	return base;
}

void	ft_draw_h_histogram(char *str)
{
	int	longest_word;
	int	c;
	int j;

	longest_word = 0;
	c = 0;
	while (*str)
	{
		if ((*str != ' ') && (*str != '\n'))
		{
			c++;
		}
		else
		{
			if (c > longest_word)
			{
				longest_word = c; 
			}
			c = 0;
		}
		++str;
	}

	j = 1;
	
	ft_putchar('\n');
	j = 1;

	while (j < longest_word)
	{
		ft_putchar('-');
		j++;
	} 
}

int	main(int argc, char	**argv)
{
	if (argc > 1)
	{
		ft_draw_h_histogram(*(++argv));
	}

	ft_putchar('\n');
	return (0);
}


