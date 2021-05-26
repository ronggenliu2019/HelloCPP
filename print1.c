#include <stdio.h>

int main(void)
{
    int i, j;
    i = 1;
    j = 10;
    printf("i is %d, j is %d. %d.\n", i, j);
    printf("decimal i is %#d, octal i is %#o, hexadecimal i is %#x.\n", i, i, i);

    unsigned int signed_i;
    unsigned short int signed_short_i;
    unsigned long int signed_long_i;
    unsigned long long int signed_long_long_i;
    printf("sizeof(int):%d, sizeof(short int):%d, sizeof(long int):%d, sizeof(long long int):%d.\n", sizeof(signed_i), sizeof(signed_short_i), sizeof(signed_long_i), sizeof(signed_long_long_i));
}
