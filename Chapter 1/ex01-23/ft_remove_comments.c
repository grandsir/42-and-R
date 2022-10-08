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
/* updated: 2022/10/08 10:50.                                              */
/* *********************************************************************** */

#include "ft_remove_comments.h"
#include <stdio.h>

#define MAXLINE 10000
#define IN 1
#define OUT 0

void	ft_remove_comments(char **s)
{
	ft_remove_single_comments(&(*s));
	ft_remove_multi_comments(&(*s));

	printf("%s", *s);
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
		if (*str == '"')
		{
			if (quote == OUT)
			{
				quote = IN;
			}
			else
			{
				quote = OUT;
			}
		}
		if (*str == '\'')
		{
			if (single_quote == OUT)
			{
				single_quote = IN;
			}
			else
			{
				single_quote = OUT;
			}
		}

		if (*str == '/' && *(str + 1) == '/')
		{
			if (quote == OUT && single_quote == OUT)
			{
				while (*str != '\n' && *str)
				{
					str++;
				}
			}
		}

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
		if (*str == '"')
		{
			if (quote == OUT)
			{
				quote = IN;
			}
			else
			{
				quote = OUT;
			}
		}
		if (*str == '\'')
		{
			if (single_quote == OUT)
			{
				single_quote = IN;
			}
			else
			{
				single_quote = OUT;
			}
		}

		if (*str == '/' && *(str + 1) == '*')
		{
			if (quote == OUT && single_quote == OUT)
			{
				while (*str != '\n' && *str)
				{
					str++;
				}
			}
		}

		line[i++] = *(str++);
	}

	line[i] = '\0';
	*s = line;
}
