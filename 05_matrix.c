#include <stdio.h>

int main (){
    int a[10][10], b[10][10], sum[10][10];
    int i, j, n, rowsum, colsum, diag1, diag2, diagsum;
    int magic = 1;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix A: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of matrix B: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &b[i][j]);
        }
    }

    //Add

    printf("\n Addition of matrix: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n\n");
    }

    //saddle point
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            int isSaddle = 1;
            for(int k = 0; k < n; k++){
                if(a[i][k] < a[i][j]){
                    isSaddle = 0;
                    break;
                }
            }
            if(isSaddle){
                for(int k = 0; k < n; k++){
                    if(a[k][j] > a[i][j]){
                        isSaddle = 0;
                        break;
                    }
                }
            }
            if(isSaddle){
                printf("Element %d at position (%d,%d) is a saddle point\n", a[i][j], i, j);
            }
        }
    }

    //magic square
    diag1 = 0;
    diag2 = 0;
    for(i = 0; i < n; i++){
        diag1 += a[i][i];
        diag2 += a[i][n - i - 1];
    }
    if(diag1 != diag2){
        magic = 0;
    }
    if(magic){
        printf("The matrixA is a magic square.\n");
    } else {
        printf("The matrixA is not a magic square.\n");
    }

    //inverse
    printf("\n Inverse of matrix A: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", a[j][i]);
        }
        printf("\n\n");
    }

    
    return 0;
}
