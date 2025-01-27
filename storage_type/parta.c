#include <stdio.h>

void report_count();
void accumulate(int);

int count = 1;

int main(void)
{
    int value;
    register int i;
    printf("Enter a positive integer (0 to quit):");
    while (scanf("%d", &value) == 1 && value > 1)
    {
        ++count;
        for (i = value; i >= 0; i--)
        {
            accumulate(i);
        }
        
        printf("Enter a positive integer (0 to quit):");
    }
    report_count();
    
    return 0;
}

void report_count() {
    printf("Loop executed %d times\n", count);
}