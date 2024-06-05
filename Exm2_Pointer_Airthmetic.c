/*Write a program to perform basic pointer arithmetic.

Tasks:

1.Declare an array of integers.
2.Use a pointer to traverse the array and print its elements*/

#include<stdio.h>

int main()
{
	int arr[]={1,2,3,4,5};
	int *ptr= arr; //Pointer to the first element of array

	printf("\nArray elements using pointers=");
	
	for(int i=0;i<5;i++)
	{
		printf("%d",*(ptr+i));

	}

	return 0;

}

