#include <stdio.h>
int main()
{
    int m1,n1, m2,n2, i, j;
    printf("Enter the number of rows for first matrix: ");
    scanf("%d", &m1);
    printf("Enter the number of columns for first matrix: ");
    scanf("%d", &n1);
    printf("Enter the number of rows for second matrix: ");
    scanf("%d", &m2);
    printf("Enter the number of columns for second matrix: ");
    scanf("%d", &n2);
    if (m1 != m2 || n1 != n2) 
    {
        printf("Matrices cannot be added. Incompatible dimensions.\n");
        return 1;
    }
    int matrix1[m1][n1], matrix2[m2][n2], sum[m1][n1];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m1; i++) 
    {
        for (j = 0; j < n1; j++) 
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m2; i++) 
    {
        for (j = 0; j < n2; j++) 
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < m1; i++) 
    {
        for (j = 0; j < n1; j++) 
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of the two matrices:\n");
    for (i = 0; i < m1; i++) 
    {
        for (j = 0; j < n1; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}