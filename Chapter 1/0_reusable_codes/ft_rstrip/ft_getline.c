/* *********************************************************************** */
/* file: ft_getline.c                                                      */
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
/* created: 2022/10/07 20:11.                                              */
/* updated: 2022/10/07 20:11.                                              */
/* *********************************************************************** */

/* copies a line into `line` */
/* deletes copied line from `arg` */
/* returns length of `line` */
int	ft_getline(char line[], char **arg)
{
	int		c;
	int		i;
	char	*s;

	c = 0;
	i = 0;
	s = *arg;

	while (*s)
	{
		*arg = *arg + 1;
		line[i] = *s;
		i++;

		if (*s == '\n')
		{
			break ;
		}
		s++;
	}

	line[i] = '\0';

	return (i);
}