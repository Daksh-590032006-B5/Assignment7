#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int msum = 0, ssum = 0;
    int ut = 1, lt = 1;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
            if (i == j) 
            {
                msum += matrix[i][j];
            }
            if (i + j == n - 1) 
            {
                ssum += matrix[i][j];
            }
            if (i > j && matrix[i][j] != 0) 
            {
                ut = 0;
            }
            if (i < j && matrix[i][j] != 0) 
            {
                lt = 0;
            }
        }
    }

    printf("Sum of main diagonal elements: %d\n", msum);
    printf("Sum of secondary diagonal elements: %d\n", ssum);

    if (ut && lt) 
    {
        printf("The matrix is a diagonal matrix.\n");
    } 
    else if (ut) 
    {
        printf("The matrix is an upper triangular matrix.\n");
    } 
    else if (lt) 
    {
        printf("The matrix is a lower triangular matrix.\n");
    } 
    else 
    {
        printf("The matrix is neither upper triangular nor lower triangular.\n");
    }
}