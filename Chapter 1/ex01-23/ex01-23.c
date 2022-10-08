/* *********************************************************************** */
/* file: ex01-23.c                                                         */
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
/* created: 2022/10/07 23:48.                                              */
/* updated: 2022/10/08 14:28.                                              */
/* *********************************************************************** */

#include <unistd.h>
#include "ft_remove_comments.h"

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_remove_comments(&*(++argv));
	}
	return (0);
}
