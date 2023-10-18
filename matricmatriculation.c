#include <stdio.h>
int main(){
    int row1, col1, row2, col2;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);

    if(col1 != row2){
        printf("Matrix multiplication is not possible because column of first matrix is not equal to the row of second matrix.\n");
        return 1;
    }

    int mat1[row1][col1];
    int mat2[row2][col2];
    int result[row1][col2];
    printf("Enter elements for the first matrix:\n");
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            printf("\nEnter element no. A%d%d : ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\nEnter elements for the second matrix:\n");
    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            printf("\nEnter element no. A%d%d : ",i+1,j+1);
            scanf("%d", &mat2[i][j]);
        }
    }

// Initialize the result matrix to all zeros
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            result[i][j] = 0;
        }
    }
// Perform matrix multiplication
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            for(int k=0; k<col1; k++){
                result[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }

    printf("\nResultant Matrix:\n");
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++){
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}