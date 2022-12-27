#include <stdio.h>
void main()
{
    int a[5][5],b[5][5],i,j,m,n,p,q;
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
            b[j][i]=a[i][j];
        }
    }
    printf("Transpose of matrix is:\n");
    for(i=0;i<m;i++)
    {  
        for(j=0;j<n;j++)    
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");    
    }
}