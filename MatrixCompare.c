#include <stdio.h>

int main() {
    char matrix1[3][3];
    char matrix2[3][3];
    int common_count = 0;
    int i=0, j=0;
     printf("Enter matrix 1 (9 characters):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf(" %c", &matrix1[i][j]);   
        }
    }
    printf("Matrix 1:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %c ", matrix1[i][j]);
        }
        printf("\n");
    }

     printf("Enter matrix 2 (9 characters):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf(" %c", &matrix2[i][j]);   
        }
    }
    printf("\nMatrix 2:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %c ", matrix2[i][j]);
        }
        printf("\n");
    }
    int k=0,l=0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for(k=0;k<3;k++)
            {for(l=0;l<3;l++)
            if (matrix1[i][j] == matrix2[k][l]) {
                common_count++;
            }
        }
        }
    }
    printf("\nSimilar elements in both matrices are %d\n", common_count);

    return 0;
}
