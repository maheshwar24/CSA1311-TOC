#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);

    if (n >= 2 && s[0] == 'b' && s[n-1] == 'a')
        printf("ACCEPTED (Valid for NFA)\n");
    else
        printf("REJECTED (Invalid for NFA)\n");

    return 0;
}
