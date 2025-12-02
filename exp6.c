#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    int i = 0, j = strlen(s) - 1;

    while (i <= j) {
        if (s[i] != '0' || s[j] != '1') {
            printf("INVALID\n");
            return 0;
        }
        i++; 
        j--;
    }

    printf("VALID\n");
    return 0;
}
