#include "stdio.h"
#include "conio.h"
#define infinity 999

void dij(int n,int s,int w[10][10],int d[])
{
 int i,u,count,m,flag[10],min;
 for(i=1;i<=n;i++)
  flag[i]=0,d[i]=w[s][i];
 count=2;
 while(count<=n)
 {
  min=99;
  for(m=1;m<=n;m++)
   if(d[m]<min && !flag[m])
    min=d[m],u=m;
  flag[u]=1;
  count++;
  for(m=1;m<=n;m++)
   if((d[u]+w[u][m]<d[m]) && !flag[m])
    d[m]=d[u]+w[u][m];
 }
}

void main()
{
 int n,s,i,j,w[10][10],d[10];
 printf("\n Enter the number of nodes:");
 scanf("%d",&n);
 printf("\n Enter the cost matrix:\n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  {
   scanf("%d",&w[i][j]);
   if(w[i][j]==0)
    w[i][j]=infinity;
  }
 printf("\n Enter the source vertex:");
 scanf("%d",&s);
 dij(n,s,w,d);
 printf("\n Shortest path:\n");
 for(i=1;i<=n;i++)
  if(i!=s)
   printf("%d->%d,cost=%d\n",s,i,d[i]);
}
