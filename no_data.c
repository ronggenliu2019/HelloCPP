#include <stdio.h>

void update_data(int *);

int main(int argc, char const *argv[])
{
    // int no_data[4] = {[2]=5};
    int no_data[4] = {0, 1, 2, 3};
    // no_data[4] = {3, 4, 4, 5};
    int * t = no_data;
    int i;
    int * p;
    *p = 5;
    printf("%2s%14s %p\n", "i", "no_data[i]", t + 1);
    update_data(no_data);
    for (i = 0; i < 5; i++)
    {
        printf("%2d%14d\n", i, no_data[i]);
    }
    
    return 0;
}

void update_data(int data[]) {
    data[1] = 2;
    *(data + 2) = 3;
}