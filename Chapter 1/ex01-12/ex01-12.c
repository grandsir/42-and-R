/* *********************************************************************** */
/* file: ex01-12.c                                                         */
/* created by: GrandSir													   */
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
/* created: 2022/10/02 17:29.                                              */
/* updated: 2022/10/03 16:29.                                              */
/* *********************************************************************** */

#include <unistd.h>

#define IN 1
#define OUT 0
#define MAXLINE 1000

/* Defining our own functions */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* removing leading spaces */
void	ft_lstrip(char **str)
{
	int	c;
	int	j;
	char	temp[MAXLINE];
	char	*s;

	c = 0;
	j = 0;
	s = *str;
	while ((s[c] == ' ') || (s[c] == '\t') || (s[c] == '\n'))
	{
		++c;
	}
	while (s[c])
	{
		temp[j++] = s[c++];
	}

	temp[j] = '\0';
	*str = temp;
}

/* K & R Solution */
void	ft_print_first_word(char *s)
{
	int	state;

	ft_lstrip(&s);
	state = IN;
	while (*s)
	{
		if (*s == '\n')
		{
			state = IN;
			ft_putchar('\n');
			while ((*(s) == ' ') || (*(s) == '\t') || (*(s) == '\n'))
			{
				++s;
			}
		}
		if (*s == ' ')
		{
			state = OUT;
		}
		if (state == IN)
		{
			ft_putchar(*s);
		}
		++s;
	}
}

int	main(int argc, char	**argv)
{
	char	*string;

	if (argc > 1)
	{
		string = *(++argv);
		ft_print_first_word(string);
	}
	ft_putchar('\n');
	return (0);
}
