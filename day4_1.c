#include<stdio.h>
int linear_search(int);
void main()
{
    linear_search(1);
}
int linaer_search(int x)
{
    int a[7],n,i,num,k=0;
    printf("enter no. of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements:");
        scanf("%d",&a[i]);
    }
    printf("enter element for search:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==a[i])
        printf("%d found at %d position",num,i);
        k++;
    }
    if(k==0)
    printf("element is not present");
    return 0;
}
