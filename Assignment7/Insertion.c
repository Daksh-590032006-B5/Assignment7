#include<stdio.h>
int main() 
{
    int arr[100], n, pos, element, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    if(pos < 0 || pos >= n) 
    {
        printf("Invalid position!\n");
        return 1;
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    // Shift elements to the right
    for(i = n; i > pos; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[pos-1] = element;
    printf("Array after insertion: ");
    for(i = 0; i <= n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}