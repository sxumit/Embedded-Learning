#include <stdio.h>
int main(){
    int arr[] = {10,20,30,40,50};
    int *ptr = arr; // here we can use arr, &arr or arr[0]..by default the pointer take array in address form
    //assume that address of 10 is 1000
    //address of 20 is 1004 and so on because int takes 4 byte space

    printf("%d \n", *ptr); // prints the first number 10
    printf("%d \n", ptr); // prints the address of 10

    printf("%d \n",*(ptr+1)); // here +1 means 4 byte , so 1000+4 = 1004. means address of 20 
    printf("%d \n", (ptr+1)); // prints the address of 20

    printf("%d \n",*(ptr+2)); // prints the number at 1000+8 , ie, 30
    printf("%d \n", (ptr+2));
    return 0;
}