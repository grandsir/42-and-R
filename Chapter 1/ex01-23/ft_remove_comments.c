/* *********************************************************************** */
/* file: ft_remove_comments.c                                              */
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
/* created: 2022/10/07 23:56.                                              */
/* updated: 2022/10/08 19:03.                                              */
/* *********************************************************************** */


// This algorithm can be improved.

#include "ft_remove_comments.h"

#define MAXLINE 10000
#define IN 1
#define OUT 0

void	ft_remove_comments(char **s)
{
	ft_remove_single_comments(&(*s));
	ft_remove_multi_comments(&(*s));
}

void	check_quotes(char c, int *q, int *sq)
{
	if (c == '"')
	{
		if (*q == OUT)
			*q = IN;
		else
			*q = OUT;
	}
	if (c == '\'')
	{
		if (*sq == OUT)
			*sq = IN;
		else
			*sq = OUT;
	}
}

void	ft_remove_single_comments(char **s)
{
	char	line[MAXLINE];
	char	*str;
	int		i;
	int		quote;
	int		single_quote;

	str = *s;
	i = 0;
	quote = OUT;
	single_quote = OUT;

	while (*str)
	{
		check_quotes(*str, &quote, &single_quote);

		if (*str == '/' && *(str + 1) == '/')
			if (quote == OUT && single_quote == OUT)
				while (*str != '\n' && *str)
					str++;

		line[i++] = *(str++);
	}

	line[i] = '\0';
	*s = line;
}

void	ft_remove_multi_comments(char **s)
{
	char	line[MAXLINE];
	char	*str;
	int		i;
	int		quote;
	int		single_quote;

	str = *s;
	i = 0;
	quote = OUT;
	single_quote = OUT;

	while (*str)
	{
		check_quotes(*str, &quote, &single_quote);

		if (*str == '/' && *(str + 1) == '*')
			if (quote == OUT && single_quote == OUT)
				while (*str != '\n' && *str)
					str++;

		line[i++] = *(str++);
	}

	line[i] = '\0';
	*s = line;
}
