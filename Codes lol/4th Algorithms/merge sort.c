#include <stdio.h>
int a[100];
int merge(int p,int q, int r)
{
    int n1,n2,L[1000],R[1000],i,j,k;
    n1=q-p+1;
    n2=r-q;
    for(i=1; i<=n1; i++)
        L[i]=a[p+i-1];
    for(j=1; j<=n2; j++)
        R[j]=a[q+j];
    L[n1+1]=32000;
    R[n2+1]=32000;
    i=1;
    j=1;
    for(k=p; k<=r; k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }
    return 0;
}
int merge_sort(int p, int r)
{
    int q;
    if(p<r)
    {
        q=((p+r)/2);
        merge_sort(p,q);
        merge_sort(q+1,r);
        merge(p,q,r);
    }
    return 0;
}
int main()
{
    int n,p,r,i;
    printf("how many numbers: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);
    p=1;
    r=n;
    merge_sort(p,r);
    printf("after sorting the elements are: ");
    for(i=1; i<=n; i++)
        printf("%d ",a[i]);
    return 0;
}
