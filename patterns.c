#include <stdio.h>

int main()
{
    int rows = 10;

    // first loop for printing row
    for (int i = 0; i < rows; i++) {

        // second loop for printing character in each rows
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
