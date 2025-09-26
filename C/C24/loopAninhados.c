#include <stdio.h>

int main () {
    int i;
    for (i = 1; i <= 10; i++) {
        int j;
        for( j = 1; j <=10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}