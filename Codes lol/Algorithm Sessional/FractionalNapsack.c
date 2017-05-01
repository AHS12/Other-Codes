/*Fractional Knapsack using Greedy Method*/
#include<stdio.h>
void knapsack(int n,float profit[],float weight[],float M){
 float x[20],tp=0;
 int i,j;
 printf("\nEntered Items are :\n ");
 printf(" Value\t\t\tProfit:");
 printf("\n---------------------------\n");
 for(i=0;i<n;i++){
     printf("%f\t\t\t%f\n",profit[i],weight[i]);
   }
 for(i=0;i<n;i++)
     x[i]=0.0;
 for(i=0;i<n;i++){
   if(weight[i]>M)
      break;
   else
       {
           x[i]=1.0;
           tp+=profit[i];
           M-=weight[i];
       }
    }
   if(i<n){
      x[i]=M/weight[i];
   }
   tp+=x[i]*profit[i];
   printf("\n\nProfit Vector is : ");
   for(i=0;i<n;i++)
     printf("%f\t",x[i]);
   printf("\n");
   printf("\nTotal Profit : %f",tp);
}
int main(){
  float weight[20],profit[20],ratio[20],capacity,temp;
  int n,i,j;
  printf("\nEnter no of items : ");
  scanf("%d",&n);
  printf("\nEnter Capacity : ");
  scanf("%f",&capacity);
  printf("\nEnter Weight and Profit : ");
  for(i=0;i<n;i++){
      printf("\nEnter Weight and Profit for item%d : ",i);
      scanf("%f %f",&weight[i],&profit[i]);
  }
  for(i=0;i<n;i++)
    ratio[i]=profit[i]/weight[i];
  for(i=0;i<n;i++)
     for(j=i+1;j<n;j++){
       if(ratio[i]<ratio[j]){
        temp=ratio[j];
        ratio[j]=ratio[i];
        ratio[i]=temp;
        temp=weight[j];
        weight[j]=weight[i];
        weight[i]=temp;
        temp=profit[j];
        profit[j]=profit[i];
        profit[i]=temp;
       }

     }

    knapsack(n,profit,weight,capacity);
    return(0);
}

