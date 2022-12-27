#include <stdio.h>
void main()
{
    int a[5][5],i,j,m,n,d=0;
    printf("enter order of matrix:");
    scanf("%d %d",&m,&n);
    if(m!=n)
    {
        printf("matrix is not a square matrix.");
    }
    else
    {
        printf("enter elements of matrix:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        d=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
        printf("determinant of matrix is:%d",d);
    }
}