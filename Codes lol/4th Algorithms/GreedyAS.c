#include<stdio.h>
void greedyActivitySelector(int s[], int f[], int len, int a[]){
     int n = len;
     int m, i = 1;
     a[0]=1;
     for ( m=1;m<n;m++){
         if (s[m] >= f[i]){
            a[m] = 1;
            i = m;
         }
     }
}

int main(){
    int i,a2[15];
    int s[] = {1,3,0,5,3,5,6,8,8,2,12};
    int f[] = {4,5,6,7,8,9,10,11,12,13,14};

    int len = sizeof(s) / sizeof(int);

    greedyActivitySelector(s, f, len, a2);
    printf("Iterative Solution : ");
    for ( i=0;i<len;i++){
        if (a2[i] == 1)
        printf("%d ",i+1);
    }

    return 0;
}
