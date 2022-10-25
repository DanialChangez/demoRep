#include <stdio.h>

int main() {
    char a[40] = "Hello World";

    for (int i = 0; i < strlen(a); i++) {
        for (int j = i; j >= 0; j--) {
            printf("* %c", a[i]);
        }
        printf("\n");
    }
    return 0;
}