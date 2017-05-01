#include<stdio.h>
#include<string.h>
int A[20],m=1;
void Insort()
{
    int i,j,key,l;
    l=strlen(A);
  for(j=2;j<=l;j++)
    {
        key=A[j];
        i=j-1;
        while(i>0 && A[i]>key)
        {
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key;
    }
}
int menu()
{
    int choice;
    do
    {
        printf("\n1-Insort\n2-show\n3-Exit\n");
        scanf("%d",&choice);
    }
    while(choice<1||choice>3);
    return choice;
}
void show()
{
    int i,l;
    l=strlen(A);
    for(i=1;i<=l;i++)
    printf("%d ",A[i]);
}
int main()
{
    int choice;
    printf("Insert A[1]:");
    scanf("%d",&A[m]);
     do
    {
        choice=menu();
        switch(choice)
        {
        case 1:
            printf("\nInsert the number: ");
            scanf("%d",&A[++m]);
            Insort();
            break;
        case 2:
            show();
            break;
        case 3:
            printf("End of operation.\n");
            break;
        }
    while(choice!=3);
    return 0;
}
