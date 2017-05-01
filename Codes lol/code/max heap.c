#include <stdio.h>
void max_heapify(int *a,int i,int n)
{
    int j,temp;
    j=2*i;
    while(j<=n)
    {
        if( j<n&& a[j+i]>a[j])0000000000000000000000000
            j=j+1;
        if(temp>a[j])
        {
            a[j/2]=a[j];
            j=2*j;
            }
    }
    a[j/2]=temp;
    return;
}
void build_maxheap(int *a,int n)
{
    int i;
    for(i=n/2;i>=1;i--)
    {
        max_heapify(a,i,n);
    }
}
int main()
{
    int n,i,x;
    printf("enter no of element of array\n");
    scanf("%d",&n);
    int a[20];
    {
        printf("enter element of i\n");
        scanf("%d",&a[i]);
    }
    build_maxheap(a,n);
    printf("max heap\n");
    for(i=1;i<=n;i++)
    {
        printf("a[i]\n");
    }
}
