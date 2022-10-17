/* *********************************************************************** */
/* file: ex03-03.c                                                         */
/* created by: GrandSir                                                    */
/*                                                                         */
/*                                                                         */
/*                ,ggg,        gg      ,ggggggggggg,                       */
/*                dP""Y8b       dP     dP"""88""""""Y8,                    */
/*                Yb, `88      d8'     Yb,  88      `8b                    */
/*                `"  88    ,dP'       `"  88      ,8P                     */
/*                    88aaad8"             88aaaad8P"                      */
/*                    88""""Yb,     and    88""""Yb,                       */
/*                    88     "8b           88     "8b                      */
/*                    88      `8i          88      `8i                     */
/*                    88       Yb,         88       Yb,                    */
/*                    88        Y8         88        Y8.grandsir           */
/*                                                                         */
/*                                                                         */
/*                                                                         */
/* created: 2022/10/17 23:21.	                                           */
/* updated: 2022/10/17 23:52.                                              */
/* *********************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putline(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}	
}

int	is_valid_range(int b1, int b2)
{
	int	lower;
	int	upper;

	lower = b1;
	upper = b2;
	if (b1 > b2)
	{
		b1 = upper;
		b2 = lower;
	}

	if (b1 >= 'a' && b2 <= 'z')
		return (1);
	if (b1 >= 'A' && b2 <= 'Z')
		return (1);
	if (b1 >= '0' && b2 <= '9')
		return (1);

	return (0);
}

void	ft_expand(char *s1, char s2[])
{
	char	l_bound;
	char	r_bound;
	int		z;

	z = 0;
	while (*s1)
	{
		if (*(s1 + 1) == '-')
		{
			l_bound = *s1;
			r_bound = *(s1 + 2);
			if (is_valid_range(l_bound, r_bound))
			{
				if (l_bound < r_bound)
					while (l_bound < r_bound)
						s2[z++] = l_bound++;
				else
					while (l_bound > r_bound)
						s2[z++] = l_bound--;
				s1 += 2;
			}
		}
		s2[z++] = *(s1++);
	}
	s2[z++] = '\0';
}

int	main(int argc, char **argv)
{
	char	line[1000];

	if (argc > 1)
	{
		ft_expand(*(++argv), line);
		ft_putline(line);
	}
	ft_putchar('\n');
	return (0);
}
