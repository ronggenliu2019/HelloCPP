#include <stdio.h>

void exchange(int *, int *);

int main(int argc, char const *argv[])
{
    int x = 5, y = 10;
    printf("x = %d, y = %d.\n", x, y);
    exchange(&x, &y);    
    printf("after exchange, x = %d, y = %d.\n", x, y);
    return 0;
}

void exchange(int *n, int *m) {
    printf("n = %d, m = %d.\n", *n, *m);
    int temp = *n;
    n = m;
    m = &temp;
    printf("after exchange，n = %d, m = %d.\n", *n, *m);
}

