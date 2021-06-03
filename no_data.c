#include <stdio.h>

int main(int argc, char const *argv[])
{
    int no_data[4] = {[2]=5};
    int i;
    printf("%2s%14s\n", "i", "no_data[i]");
    for (i = 0; i < 4; i++)
    {
        printf("%2d%14d\n", i, no_data[i]);
    }
    
    return 0;
}
