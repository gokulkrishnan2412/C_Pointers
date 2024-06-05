#include<stdio.h>

int main()
{
	//Initialize a pointer variable b using the dereference pointer
	
	int a=10,*b;

	//initializing the pointer with the address of a variable a
	
	b=&a;

	//Printing the value stored in pointer b

	printf("Value stored in b=%d",*b);

	//Printing the address of a
	
	printf("\nAddress of a=%p",&a);

	//Printing the value of pointer (address of num)
	
	printf("\nValue of Pointer b=%p",b);

	return 0;

}
