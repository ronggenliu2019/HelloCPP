#include <stdio.h>

int imax(int, int);

int main(void)
{
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3, 5));
    printf("The maximum of %d and %d is %d.\n", 3.0f, 5.0f, imax(3.0f, 5.0f));
    return 0;
}

int imax(int n, int m)
{
    return (n > m ? n : m);
}