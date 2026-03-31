#include <stdio.h>

int main()
{
    int a = 6;
    int* ptr = &a; // pointer
    printf("The value of a is %d \n", a); // direct printing
    printf("The value of a is %d \n", *ptr); //*ptr conatins value at memory address &a
    printf("The value of memory address of a is %d", ptr); // ptr contains memory address of a 
    return 0;
}