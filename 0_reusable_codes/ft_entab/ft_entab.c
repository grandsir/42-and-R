/* *********************************************************************** */
/* file: ft_entab.c                                                        */
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
/* created: 2022/10/07 23:26.                                              */
/* updated: 2022/10/07 23:26.                                              */
/* *********************************************************************** */

#define MAXLINE 1000
#define NUMBER_OF_SPACES 4

void	ft_entab(char *str)
{
	char	line[MAXLINE];
	int		i;
	int		s;

	while (*str)
	{
		if (*str == ' ')
		{
			if (++s == NUMBER_OF_SPACES)
			{
				line[i++] = '\t';
				s = 0;
			}
		}
		else
		{
			while (s > 0 && s--)
			{
				line[i++] = ' ';
			}
			line[i++] = *str;
		}
		str++;
	}
	line[++i] = '\0';
	ft_repr(line);
}
