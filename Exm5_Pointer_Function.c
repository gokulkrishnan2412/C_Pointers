/*C program to implement a pointer function which passes arrays as arguments to the function*/

#include<stdio.h>
int fun(int *a)
{
    for(int i=0;i<5;i++)
    {
    printf("%d",a[i]);
    }
}

int main()
{
    int n[5]={1,2,3,4,5};
    fun(n);
    return 0;

}