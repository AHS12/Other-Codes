#include <bits/stdc++.h>
using namespace std;

int Heap[100] = {10,20,6,4,56};
int l = 5;

int main()
{
    cout<<"Max Heap"<<endl;
    make_heap(Heap,Heap+l);
    for(int i=0; i<l; i++)
    {

        cout<<Heap[i]<<" ";

    }

    cout<<endl;

    cout<<"Min Heap"<<endl;
    make_heap(Heap+l,Heap);
    for(int i=0; i<l; i++)
    {

        cout<<Heap[i]<<" ";

    }

    return 0;

}
