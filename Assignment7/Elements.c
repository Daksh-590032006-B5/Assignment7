#include <stdio.h>
#include <limits.h>
int main() 
{
    int arr[100], n, i;
    int l = INT_MIN, sl = INT_MIN;
    int s = INT_MAX, ss = INT_MAX;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n < 2)
    {
        printf("Error: Array must have at least 2 elements.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) 
    {
        int current = arr[i];

        if (current > l) 
        {
            sl = l;
            l = current;
        } else if (current > sl && current != l) 
        {
            sl = current;
        }

        if (current < s) 
        {
            ss = s;
            s = current;
        } else if (current < ss && current != s) 
        {
            ss = current;
        }
    }

    printf("Largest element: %d\n", l);
    
    if (sl == INT_MIN) 
    {
        printf("Second Largest element: Does not exist (all elements might be equal)\n");
    } 
    else 
    {
        printf("Second Largest element: %d\n", sl);
    }

    printf("Smallest element: %d\n", s);
    
    if (ss == INT_MAX) 
    {
        printf("Second Smallest element: Does not exist (all elements might be equal)\n");
    } else 
    {
        printf("Second Smallest element: %d\n", ss);
    }

    return 0;
}
