#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

int main(void)
{
    char s[32];
    int i = 0b10001111000011110000111100001111; // 二进制
    int j = 0x8888;                             // 十六进制
    int h = 03333;                              // 八进制
    long int k = 0x88888888;
    printf("i is %d, j is %d, h is %d, k is %ld, sizeof(long int) is %d.\n", i, j, h, k, sizeof(k));
    short int x = 0b0111111111111111;
    printf("unsigned short int x is %hd.\n", x);
}
