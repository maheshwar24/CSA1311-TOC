#include <stdio.h>

int main() {
    int n, e[10][10], i, j;

    scanf("%d", &n);                
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &e[i][j]); 

    for (i = 0; i < n; i++) {
        printf("e-closure(%d) = { %d ", i, i);
        for (j = 0; j < n; j++)
            if (e[i][j]) printf("%d ", j);
        printf("}\n");
    }
    return 0;
}
