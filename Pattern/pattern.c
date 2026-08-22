#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 25; j++) {

            if(j == 1 || 
              (i == 1 && j <= 4) ||
              (i == 5 && j <= 4) ||
              (j == 5 && i > 1 && i < 5))
                printf("*");

            else if(j == 8 || 
                    (i == 1 && j >= 8 && j <= 12) ||
                    (i == 3 && j >= 8 && j <= 12) ||
                    (i == 5 && j >= 8 && j <= 12))
                printf("*");

            else if((j == 15 || j == 19) && i <= 3 ||
                    (j == 16 || j == 18) && i == 4 ||
                    j == 17 && i == 5)
                printf("*");

            else if((j == 21 || j == 25) && i >= 2 ||
                    i == 1 && j == 23 ||
                    i == 3 && j >= 21 && j <= 25)
                printf("*");

            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}