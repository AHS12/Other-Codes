#include <bits/stdc++.h>
using namespace std;

typedef int t;
t a[100];
t len,l,lar,r,len2;

t swapp(t i,t j)
{
    t t=a[i];
    a[i]=a[j];
    a[j]=t;
}

void max_heapify(t i)
{
    l=2*i;
    r=2*i+1;
    lar;
    if(l<=len && a[l]>a[i])
    {
        lar=l;
    }
    else
        lar=i;
    if(r<=len && a[r]>a[lar])
    {
        lar=r;
    }
    if(lar!=i)
    {
        swapp(lar,i);
        max_heapify(lar);
    }
}

void build_max_heap()
{
    for(t i=len/2; i>=1; i--)
    {
        max_heapify(i);
    }
}

void heapsort()
{
    build_max_heap();
    for(t i=len; i>=2; i--)
    {
        swapp(i,1);
        len=len-1;
        max_heapify(1);
    }
}
t main()
{
    cin>>len;
    len2=len;
    for(t j=1; j<=len; j++)
    {
        cin>>a[j];
    }
    heapsort();
    for(t j=1; j<=len2; j++)
        cout<<a[j]<<" ";
    return 0;
}

