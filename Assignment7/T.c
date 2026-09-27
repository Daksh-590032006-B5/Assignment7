#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n], transpose[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    int is_symmetric = 1, is_skew_symmetric = 1;
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            if (matrix[i][j] != transpose[i][j]) 
            {
                is_symmetric = 0;
            }
            if (matrix[i][j] != -transpose[i][j]) 
            {
                is_skew_symmetric = 0;
            }
        }
    }
    if (is_symmetric==1) 
    {
        printf("The matrix is symmetric.\n");
    } 
    else if (is_skew_symmetric==1) 
    {
        printf("The matrix is skew-symmetric.\n");
    } 
    else 
    {
        printf("The matrix is neither symmetric nor skew-symmetric.\n");
    }
}