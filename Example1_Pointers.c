#include<stdio.h>
int main()
{
	//Initialize a pointer variable b using the dereference pointer
	int a=10,*b;
	//initializing the poingter with the address of a variable a
	b=&a;
	printf("%d",*b);
}
