/* *********************************************************************** */
/* file: ex02-10.c                                                         */
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
/* created: 2022/10/17 18:25.	                                           */
/* updated: 2022/10/17 18:32.                                              */
/* *********************************************************************** */

#include <unistd.h>

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

void	ft_lower(char **str)
{
	char	*s;
	int		i;
	char	line[1000];

	i = 0;
	s = *str;
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			line[i++] = (*s - 'A') + 'a';
		else
			line[i++] = *s;
		s++;
	}
	line[i++] = '\n';
	line[i++] = '\0';
	ft_putline(line);
}

//ternary operators are forbidden so i'll stick with if-else
int	main(int argc, char **argv)
{
	char	*str;

	if (argc > 1)
	{
		str = *(++argv);
		ft_lower(&str);
	}
	return (0);
}
