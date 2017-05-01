#include<bits/stdc++.h>
using namespace std;
struct myOrder
{
    bool operator()(const int& a, const int& b)
    {
        return a > b;
    }
};
int main()
{
    priority_queue<int> pq;
    pq.push(0);
    pq.push(4);
    pq.push(9);
    pq.push(45);
    pq.push(12);
    pq.push(6);
    pq.push(38);
    pq.push(19);
    pq.push(7);
    pq.push(9);
    pq.push(33);
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    ///Vector to Priority Queue
    vector<int > mn;
    mn.push_back(0);
    mn.push_back(33);
    mn.push_back(4);
    mn.push_back(9);
    mn.push_back(45);
    mn.push_back(12);
    mn.push_back(6);
    mn.push_back(38);
    mn.push_back(19);
    mn.push_back(7);
    mn.push_back(9);

    priority_queue<int > q(mn.begin(),mn.end());
    while(q.empty()==false)
    {
        cout<<q.top()<<" ";
        q.pop();
    }

    cout<<endl;
    ///Priority Queue min
    priority_queue<int,vector<int>,myOrder> min_Ex;
    min_Ex.push(0);
    min_Ex.push(4);
    min_Ex.push(9);
    min_Ex.push(45);
    min_Ex.push(12);
    min_Ex.push(6);
    min_Ex.push(38);
    min_Ex.push(19);
    min_Ex.push(7);
    min_Ex.push(9);
    min_Ex.push(33);

    while(min_Ex.empty()==false)
    {
        cout<<min_Ex.top()<<" ";
        min_Ex.pop();
    }
    return 0;
}
