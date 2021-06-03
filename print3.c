#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>

int main(void)
{
    unsigned char ch;
    scanf("%c", &ch);
    printf("you input %c, int value is %hd.\n", ch, ch);
    int32_t me32;
    me32 = 4599999;
    printf("me32 is %" PRId32 "\n", me32);
}