#include<stdio.h>
int main()
{
    int m1,n1, m2,n2, i, j, k;
    printf("Enter the number of rows for first matrix: ");
    scanf("%d", &m1);
    printf("Enter the number of columns for first matrix: ");
    scanf("%d", &n1);
    printf("Enter the number of rows for second matrix: ");
    scanf("%d", &m2);
    printf("Enter the number of columns for second matrix: ");
    scanf("%d", &n2);
    if (n1 != m2) 
    {
        printf("Matrices cannot be multiplied. Incompatible dimensions.\n");
        return 1;
    }
    int matrix1[m1][n1], matrix2[m2][n2], product[m1][n2];
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
        for (j = 0; j < n2; j++) 
        {
            product[i][j] = 0;
        }
    }
    for (i = 0; i < m1; i++) 
    {
        for (j = 0; j < n2; j++) 
        {
            for (k = 0; k < n1; k++) 
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Product of the two matrices:\n");
    for (i = 0; i < m1; i++) 
    {
        for (j = 0; j < n2; j++) 
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}