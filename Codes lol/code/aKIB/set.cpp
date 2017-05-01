#include<bits/stdc++.h>
using namespace std;
int main()
{

    int myints[]= {10,20,20,2,30,30,40,50};
    set<int> a(myints,myints+8);
    set<int>::iterator i;
    for( i=a.begin(); i!=a.end(); i++){
        int x=*i;
        cout<<x<<" ";
    }
    return 0;
}
