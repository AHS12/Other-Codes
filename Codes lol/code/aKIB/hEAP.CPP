#include<bits/stdc++.h>
using namespace std;
int main()
{
    int heap[]={2,4,5,1,9};
    make_heap(heap,heap+5);
    for(int i=0;i<5;i++){
        cout<<heap[i]<<" ";
    }
    return 0;
}
