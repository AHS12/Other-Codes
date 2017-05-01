#include<stdio.h>
#define MAX 10

int v;
void floyd(int);
int min( int a, int b );
int w[MAX][MAX], d[MAX][MAX][MAX],pi[MAX][MAX][MAX];
void All_Pairs_Shortest_Path(int i, int j);
int main()
{
    int i,j,k;
    printf("enter the no. of vertices\n");
    scanf("%d",&v);
    printf("enter the weights matrics \n");

    for(i=1; i<=v; i++)
    {
        for(j=1; j<=v; j++)
            scanf("%d",&w[i][j]);
    }

    floyd(v);
    printf("Please enter the first vertex");
    scanf("%d", &i);
    printf("Please enter the second vertex");
    scanf("%d", &j);
    while(i!=-1 || j!= -1)
    {
        All_Pairs_Shortest_Path(i,j);
        printf("Please enter the first vertex");
        scanf("%d", &i);
        printf("Please enter the second vertex");
        scanf("%d", &j);
    }
    return 0;
}

void floyd(int v)
{
    int k, i,j;

    k=0;
    for(i=1; i<=v; i++)
    {
        for(j=1; j<=v; j++)
            d[k][i][j]=w[i][j];
    }

    for(k=1; k<=v; k++)
    {
        for(i=1; i<=v; i++)
        {
            for(j=1; j<=v; j++)
                d[k][i][j]=min(d[k-1][i][j], d[k-1][i][k]+ d[k-1][k][j]);
        }
    }

    k=0;
    for(i=1; i<=v; i++)
        for(j=1; j<=v; j++)
            if (i==j||w[i][j]==100)
                pi[k][i][j]=0;
            else if(i!=j&&w[i][j]<100)
                pi[k][i][j]=i;



    for(k=1; k<=v; k++)
        for(i=1; i<=v; i++)
            for(j=1; j<=v; j++)
                if(d[k-1][i][j]<=d[k-1][i][k]+d[k-1][k][j])
                    pi[k][i][j]=pi[k-1][i][j];
                else if(d[k-1][i][j]>d[k-1][i][k]+d[k-1][k][j])
                    pi[k][i][j]=pi[k-1][k][j];

//displayin matrix

    for(k=0; k<=v; k++)
    {
        printf(" D%d \n",k);
        for(i=1; i<=v; i++)
        {
            printf("\n");
            for(j=1; j<=v; j++)
                printf("\t %d",d[k][i][j]);
        }
        printf("\n \n ");
    }

    for(k=0; k<=v; k++)
    {
        printf(" Pi%d \n",k);
        for(i=1; i<=v; i++)
        {
            printf("\n");
            for(j=1; j<=v; j++)
                printf("\t %d",pi[k][i][j]);
        }
        printf("\n \n ");
    }
}

int min( int a, int b )
{
    if ( a <= b )
        return a;
    else
        return b;
} /*End of minimum()*/
void All_Pairs_Shortest_Path(int i, int j)
{

    if (i==j)
        printf("%d",i);
    else if (pi[v][i][j]==0)
        printf("There is no path from %d to %d", i,j);
    else
    {
        All_Pairs_Shortest_Path(i,pi[v][i][j]);
        printf("%d", j);
    }
}
