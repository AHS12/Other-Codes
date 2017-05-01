#include<stdio.h>
int arr[50];
void quicksort(int a[],int p,int r);
int partionint(int a[],int p,int r);
void exchange(int i,int j);
void quicksort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
}
int partition(int a[],int p,int r)
{
    int j,i,x;
    x=a[r];
    i=p-1;
    for(j=p;j<=(r-1);j++)
        if(a[j]<x)
    {
        i=i+1;
        exchange(i,j);
    }
    exchange(i+1,r);
    return i+1;
}
void exchange(int i,int j)
{
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int main()
{
    int i,n;
    printf("enter number of elements:") ;
    scanf("%d",&n);

    printf("enter the elements:\n");
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
        quicksort(arr,1,n);
    printf("the sorted elements:\n");
    for(i=1;i<=n;i++)
        printf("%4d",arr[i]);
    return 0;
}
