#include <stdio.h>
#include <string.h>
#define STLEN 10

int main(void)
{
    int ins[2];
    printf("&ins=%p, &(ins + 1)=%p\n", &ins, &ins + 1);
    char test[STLEN] = "test";
    char words[STLEN];
    fputs("Enter a string, please.\n", stdout);
    fgets(words, STLEN, stdin);
    printf("Your string twice:\n");
    printf("&words=%p, %p, %p, %p, %p, %p, %c, %c, %c, %c, %c, %c, %d\n", &words, &words + 1, &words + 2, &words + 3, &words + 4, &words + 5, words[0], words[1], words[2], words[3], words[4], words[5], sizeof(words));
    printf("&test=%p, %p, %p, %p, %p, %c, %c, %c, %c, %c\n", &test, &test + 1, &test + 2, &test + 3, &test + 4, test[0], test[1], *(&test + 2), test[3], test[4]);
    fputs(words, stdout);
    fputs("Done.\n", stdout);
    char str[] = "whathhhhhhhhhhhhhh";
    printf("str.length = %d, str.size = %d, str = %s. %d\n", strlen(str), sizeof(str), str, sizeof(int));
    return 0;

}