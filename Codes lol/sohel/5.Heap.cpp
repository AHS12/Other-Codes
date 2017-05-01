#include <bits/stdc++.h>
using namespace std;
int arr[1000];
int N;

void max_heapify(int i)
{
    int left= 2*i;
    int right = 2*i+1;
    int largest;

    if(left<=N && arr[left]>arr[i])
    {
        largest = left;
    }
    else
    {
        largest =i;
    }

    if(right<=N && arr[right]>arr[largest])
    {
        largest = right;
    }
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        max_heapify(largest);
    }
}
void build_maxheap ()
{
    for(int i = N/2 ; i >= 1 ; i-- )
    {
        max_heapify (i) ;
    }
}

int main()
{
    int data;
    cout<<"How many elements\n";
    cin>>N;

    cout<<"Enter the elements\n";
    for(int j=1; j<=N; j++)
    {
        cin>>data;
        arr[j]=data;
    }
    cout<<"MAX heap: ";
    build_maxheap();
    for(int j=1; j<=N; j++)
    {
        cout<<arr[j]<<" ";
    }
}
