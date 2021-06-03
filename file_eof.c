#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    FILE *fp;
    char fName[50];
    printf("Enter the name of the file:");
    scanf("%s", fName);
    fp = fopen(fName, "r");
    if (fp == NULL)
    {
        printf("Failed to open file. Bye\n");
        exit(1);
    }
    while ((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}