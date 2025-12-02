#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    if(str[0] != '0' || str[strlen(str)-1] != '0')
        flag = 0;

    for(i = 1; i < strlen(str)-1; i++)
        if(str[i] != '1')
            flag = 0;

    if(flag)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}
