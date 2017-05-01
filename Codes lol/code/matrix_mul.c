#include<stdio.h>
#define MAX 10
int    main()
{
    int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
    int i,j,k,row,col;
    printf("Enter row of matrix");
    scanf("%d",&row);
    printf("Enter column of matrix");
    scanf("%d",&col);
    printf("Enter first matrix\n");
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    scanf("%d",&a[i][j]);
    printf("Enter second matrix\n");
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    scanf("%d",&b[i][j]);
    printf("\nFirst matrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("\nSecond matrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        printf("%d\t",b[i][j]);
        printf("\n");
    }
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    {
        c[i][j]=0;
        for(k=0;k<col;k++)
        c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
    }
    printf("\nMultiplication is\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        printf("%d\t",c[i][j]);
        printf("\n");
    }
    return 0;
}
