# 42 & R

Solutions for The C programming language book, divided into subjects such as 42 piscine, all conforming the 42 norminette rules.

Note: I'm still Reading K&R and updating the repository everyday.

## Examples

### ft_histogram
[ex01-13]()

subject.en.txt:
```
Assignment name  : ft_h_histogram, ft_v_histogram
Expected files   : ft_h_histogram.c, ft_v_histogram.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program to print a histogram of the lengths of words in its input. 
Both Horizontal and Vertical.

Histogram should align itself properly when numbers got bigger.

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
