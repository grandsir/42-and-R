# 42 & R

Solutions for The C programming language book, divided into subjects such as 42 piscine, all conforming the 42 norms.

Note: I'm still Reading K&R and updating the repository everyday.

Some of the exercises are not "solvable", that's why there are missing exercises inside folders.

## Examples

### ft_histogram
[ex01-13](https://github.com/GrandSir/42-and-R/tree/main/Chapter%201/ex01-13)

subject.en.txt:
```
Assignment name  : ft_h_histogram, ft_v_histogram
Expected files   : ft_h_histogram.c, ft_v_histogram.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program to print a histogram of the lengths of words in its input. 
Both Horizontal and Vertical.

Histogram should align itself properly when the numbers gets bigger.

Dashes must be the same length as the longest row/column in the histogram.

// Horizontal 
$> ./a.out "Why Dennis Ritchie Created This God Damn Language"
   + --------
1 |  ▇▇▇
2 |  ▇▇▇▇▇▇
3 |  ▇▇▇▇▇▇▇
4 |  ▇▇▇▇▇▇▇
5 |  ▇▇▇▇
6 |  ▇▇▇
7 |  ▇▇▇▇
8 |  ▇▇▇▇▇▇▇▇
   + --------

// Vertical
% ./a.out "Why Dennis Ritchie Created This God Damn Language"               
 7 |              ▇▇▇   ▇▇▇                     ▇▇▇
 6 |        ▇▇▇   ▇▇▇   ▇▇▇                     ▇▇▇
 5 |        ▇▇▇   ▇▇▇   ▇▇▇                     ▇▇▇
 4 |        ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇         ▇▇▇   ▇▇▇
 3 |  ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇
 2 |  ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇
 1 |  ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇   ▇▇▇
   + ______________________________________________
       1     2     3     4     5     6     7     8     
```

### ft_remove_comments

[ex01-23](https://github.com/GrandSir/42-and-R/tree/main/Chapter%201/ex01-23)

subject.en.txt:
```
Assignment name  : ft_remove_comments.c
Expected files   : ex01-23.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program to remove all comments from a C program.
Don't forget to handle quoted strings and character constants properly. C comments do not nest.

```
```
Input:
```
```c
#include <stdio.h>      
// this line will be deleted.
int main(int argc, char **argv)
{
        printf("Hello //quote comment world") // this will not be displayed.
        /* this also wont be displayed */
}
```


```
Output:
```
```c
#include <stdio.h>

int main(int argc, char **argv)
{
        printf("Hello //quote comment world") 

}
```
### ft_expand

[ex03-03](https://github.com/GrandSir/42-and-R/tree/main/Chapter%203/ex03-03)

subject.en.txt
```
Assignment name  : ft_expand
Expected files   : ex03-03.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz in s2.
Allow for letters of either case and digits,
and be prepared to handle cases like a-b-c and a-z0-9 and -a-z.
Arrange that a leading or trailing - is taken literally.

% ./a.out "printing the alphabet... -a-z"
printing the alphabet... -abcdefghijklmnopqrstuvwxyz

% ./a.out "hello world, printing the alphabet... a-b-c 0-9"
hello world, printing the alphabet... ab-c 0123456789

% ./a.out "hello world, printing the alphabet... a-b-c 0-9 9-0"
hello world, printing the alphabet... ab-c 0123456789 9876543210

% ./a.out "hello world, printing the alphabet... a-z0-9"
hello world, printing the alphabet... abcdefghijklmnopqrstuvwxyz0123456789
