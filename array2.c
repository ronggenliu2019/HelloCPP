#include <stdio.h>

int main(void) {
    int (*ptr)[2];
    int toff[2][2] = {12, 14, 16};
    ptr = toff;
    printf("toff[1][0] = %d.\n", toff[1][0]);
    printf("toff[1][2] = %d.\n", toff[1][2]);

    printf("**ptr = %d.\n", **ptr);
    printf("**(ptr + 1) = %d.\n", **(ptr + 1));

    int fort[2][2] = {{12}, {14, 16}};
    ptr = fort;
    printf("**ptr = %d.\n", **ptr);
    printf("**(ptr + 1) = %d.\n", **(ptr + 1));

    int grid[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("grid[1][2] = %d.\n", *(*(grid + 1) + 2));
    printf("grid[1][0] = %d, %d.\n", **(grid + 1), *grid[1]);
    printf("grid[0][0] = %d, %d, %d.\n", **grid, *grid[0], grid[0][0]);

    int a[100] = {[99] = -1};
    printf("a[0] = %d, a[99]=%d.\n", a[0], a[99]);

    int b[100] = {[99] = -1};
    printf("a[0] = %d, a[99]=%d.\n", a[0], a[99]);
}