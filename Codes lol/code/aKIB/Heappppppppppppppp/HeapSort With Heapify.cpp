#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;
#define CMP >
typedef int TYPE;
TYPE Heap[MAX];
int length;
int heapsize;

TYPE exchange(TYPE &a, TYPE &b) {
    TYPE t = a;
    a = b;
    b = t;
}

void Max_Heapify (int i) {
    int l = 2*i;
    int r = 2*i+1;
    int largest;
    if (l <= heapsize && Heap[l] CMP Heap[i])
        largest = l;
    else
        largest = i;
    if (r <= heapsize && Heap[r] CMP Heap[largest])
        largest = r;
    if (largest != i) {
        exchange (Heap[i], Heap[largest]);
        Max_Heapify (largest);
    }
}

void Build_Max_Heap() {
    int i;
    heapsize = length;
    for (i = length/2; i >= 1; i--)
        Max_Heapify(i);
}

TYPE Extract_Max(){
    heapsize=length;
    if(heapsize<1){
        cout<<"Heap UnderFlow"<<endl;
    }
    TYPE max;
    max=Heap[1];
    Heap[1]=Heap[heapsize];
    heapsize--;
    Max_Heapify(1);
    length=heapsize;
    //Build_Max_Heap();
    return max;
}


TYPE Increas_Key(int i, TYPE key) {
    if(key<Heap[i]){
        cout<<"New Key is smaller than current key"<<endl;
    }
    Heap[i]=key;
    while(i>1 && Heap[i/2]<Heap[i]){       ///Parent [floor(i/2)]
        exchange(Heap[i],Heap[(i/2)]);
        i=(i/2);
    }
    length=heapsize;
}


void Insert(TYPE key) {
    heapsize=length;
    heapsize++;
    Heap[heapsize]=-999999;
    Increas_Key(heapsize,key);
}

int main(){
    int n;
    cout<<"Enter the Size of Heap : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>Heap[i];
    }
    length=n;
    Build_Max_Heap();
    for(int i=length;i>=2;i--){
        exchange(Heap[1],Heap[i]);
        heapsize--;
        Max_Heapify(1);
    }
    for(int i=1;i<=length;i++){
        cout<<Heap[i]<<" ";

    }
    cout<<endl;
    Insert(100);
    for(int i=1;i<=length;i++){
        cout<<Heap[i]<<" ";

    }
    cout<<endl;


   cout<<Extract_Max()<<endl;
   for(int i=1;i<=length;i++){
        cout<<Heap[i]<<" ";

    }
    return 0;
}
