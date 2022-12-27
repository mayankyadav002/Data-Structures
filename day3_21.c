#include <stdio.h>
void main()
{
    int a[5][5],i,j,m,n,p,q,t;
    printf("enter order of matrix:");
    scanf("%d %d",&m,&n);
    printf("enter elements of matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           if(i>j)
           {
                t=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=t;
           }
        }
    }
    printf("Transpose of matrix is:\n");
    for(i=0;i<m;i++)
    {  
        for(j=0;j<n;j++)    
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");    
    }
}