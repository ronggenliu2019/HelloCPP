#include <stdio.h>

void sum_val(int[], int);

// int main(int argc, char const *argv[])
int main(void)
{
    int d[] = {0, 1, 2, 3, 4};
    const int * p = d;
    p++;
    // *p = 9;
    int * const q = d;
    // q++;
    *q = 9;
    const int * const r = d;
    // r++;
    // *r = 10;
    printf("p point to %d.\n", *p);
    printf("q point to %d.\n", *q);
    printf("r point to %d.\n", *r);
    sum_val(p, 5);
    printf("p point to %d.\n", *(p + 2));
    return 0;
}

void sum_val(int data[], int n)
{
    // data[0]++;
    data[2]++;
}