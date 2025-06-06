#include <stdio.h>

int main()
{
    printf("hello, world\n");    /* new linw */
    printf("hello, world\f");    /* seems to be new line*/
    printf("hello, world\7");    /* \7 is valid (bell) */
    printf("hello, world\?");    /* \? is valid */
    printf("hello, world\t");    /* tab character*/

    return (0);
} 