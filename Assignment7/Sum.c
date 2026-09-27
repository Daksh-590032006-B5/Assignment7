#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    float avg=0.0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("Sum of elements: %d\n",sum);
    printf("Average of elements: %.2f\n",avg);
}