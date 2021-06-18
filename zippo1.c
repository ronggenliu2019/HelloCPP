#include <stdio.h>

int main(void) {
    int zipp[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    printf("zipp = %p, zipp + 1 = %p.\n", zipp, zipp + 1);
    printf("zipp[0] = %p, zipp[0] + 1 = %p.\n", zipp[0], zipp[0] + 1);
    printf("*zipp = %p, zipp[0] = %p, *zipp + 1 = %p.\n", *zipp, zipp[0], *zipp + 1);
    printf("**zipp = %d, *(*zipp + 1) = %d, *(*zipp + 2) = %d.\n", **zipp, *(*zipp + 1), *(*zipp + 2));
    int i;
    for(i = 0; i < 2 * 4; i++) {
        printf("zipp[0] + %d = %d.\n", i, *(*zipp + i));
    }
}