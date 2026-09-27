#include<stdio.h>
int main()
{
    int arr[100], n, pos, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);
    if(pos < 1 || pos > n) 
    {
        printf("Invalid position!\n");
        return 1;
    }
    // Shift elements to the left
    for(i = pos - 1; i < n - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after deletion: ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}