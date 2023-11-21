#include <stdio.h>

int main() {
    int mat1[100][100], mat2[100][100], mat3[100][100], row1, col1, row2, col2;

    printf("Enter the size of rows for matrix 1: ");
    scanf("%d", &row1);

    printf("Enter the size of columns for matrix 1: ");
    scanf("%d", &col1);

    printf("Enter the size of rows for matrix 2: ");
    scanf("%d", &row2);

    printf("Enter the size of columns for matrix 2: ");
    scanf("%d", &col2);

    if (col1 != row2) {
        printf("Matrix multiplication is not possible. Columns of the first matrix must be equal to rows of the second matrix.\n");
        return 1; // Exit with an error code
    }

    printf("Enter the elements of matrix 1:\n");
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            printf("mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of matrix 2:\n");
    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            printf("mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Matrix multiplication
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            mat3[i][j] = 0;
            for(int k=0; k<col1; k++){
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Result of matrix multiplication (mat1 * mat2):\n");
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
