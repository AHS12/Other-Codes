#include<stdio.h>
void printMaxActivities(int s[], int f[], int n)
{
    int i, j;
    printf ("Following activities are selected \n");
    i = 0;
    printf("%d ", i);
    for (j = 1; j < n; j++)
    {
     if (s[j] >= f[i])
      {
          printf ("%d ", j);
          i = j;
      }
    }
}
int main()
{
    int s[20];
    int f[20];
    int n,i ;
    printf("Enter the total number of activities:  ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
      printf("\nEnter Start and End time for activity %d : ",i);
      scanf("%d %d",&s[i],&f[i]);
  }
    printMaxActivities(s, f, n);
    return 0;
}
