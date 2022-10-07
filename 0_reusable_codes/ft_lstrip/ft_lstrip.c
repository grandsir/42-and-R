/* *********************************************************************** */
/* file: ft_lstrip.c                                                       */
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
/* created: 2022/10/07 20:06.                                              */
/* updated: 2022/10/07 20:06.                                              */
/* *********************************************************************** */

#define MAXLINE 1000

/* deletes leading spaces from string */
void	ft_lstrip(char **str)
{
	int		c;
	int		j;
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