#include<bits/stdc++.h>
using namespace std;
int d[100][100],s[100][100];
int n,e,w;
void folyed(){
for(int k=1;k<=n;k++){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(d[i][j]>d[i][k]+d[k][j]){
                d[i][j]=d[i][k]+d[k][j];
                s[i][j]=s[k][j];
            }
        }
    }
}
}
int main(){
int x,y;
cin>>n>>e;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        d[i][j]=99999999;
        s[i][j]=-1;
        if(i==j)
            d[i][j]=0;
    }
}
for(int i=1;i<=e;i++){
    cin>>x>>y>>w;
    d[x][y]=w;
    d[y][x]=w;
    s[x][y]=x;
    s[y][x]=y;
}
folyed();
cout<<"D table "<<endl;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
       cout<<d[i][j]<<" ";
    }
    cout<<endl;
}
cout<<end;
cout<<"S table : "<<endl;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
       cout<<s[i][j]<<" ";
    }
    cout<<endl;
}




}
