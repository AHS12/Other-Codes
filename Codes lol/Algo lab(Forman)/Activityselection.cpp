#include<bits/stdc++.h>
using namespace std;
int s[100];
int f[100];
void activity(int n){
int i=0;
printf("%d ",i);
for(int j=1;j<n;j++){

    if(s[j]>=f[i]){
        printf("%d ",j);
        i=j;
    }
}
}
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>s[i]>>f[i];
}
activity(n);



}
