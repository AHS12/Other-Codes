#include <bits/stdc++.h>
#include <functional>
using namespace std;

int main()
{
    int n,k;
    priority_queue<int> pq;
    cout<<"how many numbers\n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int data;
        cin>>data;
        pq.push(data);
    }
    cout<<"top element is "<<pq.top()<<endl;
     pq.pop();

     cout<<"now the size is"<<pq.size()<<endl;
    while(!pq.empty())
    {

        k=pq.top();
        cout<<k<<" ";
        pq.pop();
    }
}
