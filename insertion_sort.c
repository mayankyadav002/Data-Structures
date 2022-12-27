#include<stdio.h>
void main()
{
    int a[10],i,j,n,temp;
    printf("enter no. of element in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element");
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for(j=0;j<n;j++)
    printf("%d\t",a[j]);
}