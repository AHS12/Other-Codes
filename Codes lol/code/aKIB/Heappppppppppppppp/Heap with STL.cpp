#include<bits/stdc++.h>
using namespace std;
int  Heap[100] = {0, 4, 9, 45, 12, 6, 38, 19, 7, 9, 33};
int length = 10;

int main()
{

    make_heap(Heap+length,Heap);
    for(int i=0;i<length;i++){
        cout<<Heap[i]<<" ";
   }
    return 0;
}
