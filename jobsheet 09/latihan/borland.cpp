#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "DNALROB";
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        for (int j = i; j >= 0; j--) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}

