/// sample input :
/// 6 16  item,total_weight
/// 6 6   weight,profit
/// 10 2     "
/// 3 1      "
/// 5 8      "
/// 1 3      "
/// 3 5      "
#include<bits/stdc++.h>
using namespace std;
float weight[100],profit[100],rati[100];
void result(int w,int n){
float res=0,wt=0,temp;
int i;
for(i=0;i<n;i++){
    wt+=weight[i];
    if(wt>=w)
        break;
    res+=profit[i];
}
temp=profit[i]/weight[i];
res+=temp;
cout<<"res "<<res<<endl;
}
int main(){
int n,total_w;
double temp;
cin>>n>>total_w;
for(int i=0;i<n;i++){
    cin>>weight[i]>>profit[i];
}
for(int i=0;i<n;i++){
    rati[i]=profit[i]/weight[i];
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(rati[i]<rati[j]){
            temp=rati[i];
            rati[i]=rati[j];
            rati[j]=temp;
            temp=profit[i];
            profit[i]=profit[j];
            profit[j]=temp;
            temp=weight[i];
            weight[i]=weight[j];
            weight[j]=temp;
        }
    }
}
//cout<<endl;
//for(int i=0;i<n;i++){
//    cout<<weight[i]<<" "<<profit[i]<<" "<<rati[i]<<endl;
//}
result(total_w,n);




}
