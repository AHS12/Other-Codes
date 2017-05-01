#include "stdio.h"
#include "conio.h"
#define infinity 9999

int belman(int n,int s,int w[10][10],int d[])
{
    int i,u,v,m,min;
    for(i=1; i<=n; i++)
        d[i]=w[s][i];
    for(m=1; m<=n-1; m++)
        for(u=1; u<=n; u++)
            for(v=1; v<=n; v++)
            {
                if((d[v]>d[u]+w[u][v]) && (w[u][v]!=infinity))
                    d[v]=d[u]+w[u][v];
            }

    for(u=1; u<=n; u++)
        for(v=1; v<=n; v++)
        {
            if((d[v]>d[u]+w[u][v]) && (w[u][v]!=infinity))
                return 0;
        }
 return 1;
}

void main()
{
    int n,s,i,r,j,w[10][10],d[10];
    printf("\n Enter the number of nodes:");
    scanf("%d",&n);
    printf("\n Enter the cost matrix:\n");
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            scanf("%d",&w[i][j]);
            if(w[i][j]==0)
                w[i][j]=infinity;
        }
    printf("\n Enter the source vertex:");
    scanf("%d",&s);
    r=belman(n,s,w,d);
    if(r==1)
    {
        printf("\n Shortest path:\n");
        for(i=1; i<=n; i++)
            if(i!=s)
                printf("%d->%d,cost=%d\n",s,i,d[i]);
    }
    else
        printf("The graph contains negative wight cycle.");
}
