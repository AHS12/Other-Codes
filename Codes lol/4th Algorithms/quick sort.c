#include<stdio.h>
int a[100],i;
int partition(p,r)
{
    int x,j,k;
    x=a[r];
    i=p-1;
    for(j=p;j<=(r-1);j++)
    {
        if(a[j]<x)
            i=i++;
        {
            k=a[i];
            a[i]=a[j];
            a[j]=k;
        }
    }
    k=a[i+1];
    a[i+1]=a[r];
    a[r]=k;
    return i++;
}
int quicksort(p,r)
{
    int q;
    if(p<r)
    {
        q=partition(p,r);
        quicksort(p,q-1);
        quicksort(q+1,r);
    }
    return 0;
}
int main()
{
    int j,n,p,r;
    printf("how many elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    p=1;
    r=n;
    quicksort(p,r);
    printf("after sorting elements are: ");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);
        return 0;
}
