#include <bits/stdc++.h>
using namespace std;
int arr[1000];
int N;
int d=1;

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
int maximum()
{
    return arr[ 1 ];  //as the maximum element is the root element in the max heap.
}


int extract_maximum ()
{
    if(N == 0)
    {
        cout<< "Can’t remove element as queue is empty\n";
        return -1;
    }
    int max = arr[1];
    arr[1] = arr[N];
    N = N -1;
    max_heapify(1);
    return max;
}

void increase_value ( int i, int val)
{
    if(val < arr[ i ])
    {
        cout<<"New value is less than current value, can’t be inserted" <<endl;
        return;
    }
    arr[ i ] = val;
    while( i > 1 && arr[ i/2 ] < arr[ i ])
    {
        swap(arr[ i/2 ], arr[ i ]);
        i = i/2;
    }
}
void insert_value ( int val)
{
    N = N + 1;
    arr[ N ] = -1;  //assuming all the numbers greater than 0 are to be inserted in queue.
    increase_value ( N, val);
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
    cout<<"\n";
    while(1)
    {
        int choice;

        cout<<"1 for insert\n"<<"2 for extract\n"<<"3 for view heap\n"<<"4 for view extract_max\n";
        cin>>choice;
            switch(choice)
        {
        case 1:
            int value;
            cout<<"Enter the value u want to insert\n";
            cin>>value;
            insert_value(value);
            break;
        case 2:
            int datas[1000];
            datas[d]=extract_maximum();
            d++;
            break;
        case 3:
            build_maxheap();
            for(int j=1; j<=N; j++)
            {
                cout<<arr[j]<<" ";
            }
            break;
        case 4:
            for(int j=1; j<=d-1; j++)
            {
                cout<<datas[j]<<" ";
            }
            cout<<"\n";
            break;
        default:
            break;
        }
    }
}
