#include <bits/stdc++.h>
using namespace std;

int n;
int d[100][100];

void Floyed()
{

    int i,j,k;
    for(k=0; k<n; k++)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if((d[i][k] * d[k][j]!= 0) && i != j)
                {
                    if(d[i][k]+d[k][j]<d[i][j] || d[i][j] == 0)
                    {
                        d[i][j] = d[i][k]+d[k][j];
                    }
                }
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout<<"\nMinimum Cost With Respect to Node:"<<i<<endl;
        for (j = 0; j < n; j++)
        {
            cout<<d[i][j]<<"\t";
        }
    }
}
int main()
{
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"ENTER VALUES OF ADJACENCY MATRIX\n\n";
    for (int i = 0; i < n; i++)
    {
        cout<<"enter values for "<<(i+1)<<" row"<<endl;
        for (int j = 0; j < n; j++)
        {
            cin>>d[i][j];
        }
    }
    Floyed();

}
