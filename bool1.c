#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool b = true;

    if (b) {
        printf("_Bool b is %s.\n", b ? "true" : "false");
    }
}