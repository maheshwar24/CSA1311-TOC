#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);

    if (n >= 3 && strstr(s, "101") != NULL)
        printf("VALID\n");
    else
        printf("INVALID\n");

    return 0;
}
