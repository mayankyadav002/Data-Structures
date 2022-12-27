#include<stdio.h>
void main()
{
    int a[10],i,j,n,min,temp;
    printf("enter no. of element in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        if(min!=i)
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    for(j=0;j<n;j++)
    printf("%d\t",a[j]);
}