/* Example 4- Modify the value of the address using pointers*/

#include<stdio.h>

int main()
{
    int num=10;
    int *ptr=&num;

    //Printing the value of ptr
    printf("Value stored in ptr=%d",*ptr);
    printf("\nAddress of ptr=%p",ptr);

    //Modifying the value
    *ptr=20;
    printf("\nAfter modifying, Value of ptr=%d",*ptr);

    return 0;

}