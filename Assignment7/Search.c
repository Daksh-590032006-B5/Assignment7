#include<stdio.h>
int main()
{
    int a[100],search,n,i,c=0,pos=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            c=c+1;
            pos=i+1;
            printf("Element found at position: %d\n",pos);
        }
    }
    if(c==0)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found %d times",c);
    }
}
