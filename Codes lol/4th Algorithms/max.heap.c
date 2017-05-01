#include<stdio.h>
int a[20],n;
void max_heapify(int i)
{
    int l,r,k,largest;
    l=2*i;
    r=2*i+1;
    if(l<=n && a[l]>a[i])
        largest =l;
    else
        largest=i;
    if(r<=n && a[r]>a[largest])
        largest=r;
    if(largest != i)
    {
        k=a[i];
        a[i]=a[largest];
        a[largest]=k;
        max_heapify(largest);
    }
}
int main()
{
    int i,length;
    printf("how many elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);
    printf("max heap is: ");
    for(i=n/2; i>=1; i--)
        max_heapify(i);
    for(i=1; i<=n; i++)
        printf("%d ",a[i]);
    return 0;
}
