/*C Program to swap two arrays using pointers*/

#include<stdio.h>

int swap_fun(int *a,int *b,int n)
{
    int temp;

for(int i=0;i<n;i++)
{

    temp=a[i];
    a[i]=b[i];
    b[i]=temp;

}
printf("\nSwapped Arrays:\n");
printf("a=");
for(int j=0;j<n;j++)
{
    printf("%d\t",a[j]);
  
}
printf("\nb=");
for(int j=0;j<n;j++)
{
   
    printf("%d\t",b[j]);
}
}
int main()
{
    int x[5],y[5];
    int num=5;
    printf("\nEnter the values:");
    printf("\nx=");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
       
    }
    printf("\ny=");
     for(int i=0;i<5;i++)
    {
       
        scanf("%d",&y[i]);
    }
    swap_fun(x,y,num);

}