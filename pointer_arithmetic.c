#include <stdio.h>
int main(){
    int arr[] = {10,20,30,40,50};
    int *ptr = arr; // here we can use arr, &arr or arr[0]..by default the pointer take array in address form
    //assume that address of 10 is 1000
    //address of 20 is 1004 and so on because int takes 4 byte space

    printf("Arithmetic Addition starts here- \n");
    printf("%d \n", *ptr); // prints the first number 10
    printf("%d \n", ptr); // prints the address of 10

    printf("%d \n",*(ptr+1)); // here +1 means 4 byte , so 1000+4 = 1004. means address of 20 
    printf("%d \n", (ptr+1)); // prints the address of 20

    printf("%d \n",*(ptr+2)); // prints the number at 1000+8 , ie, 30
    printf("%d \n", (ptr+2));


    // UNDERSTANDING POST INCREMENT
    printf("Post increment operation starts here- \n");
    printf("%d \n",*ptr++); // this is post increment means it will first print *ptr ie 10 then increase
    // now internally the pointer point to 1000+4 ,ie 20. now if we print the *ptr, it give 20 now
     printf("%d \n",*ptr);


     // PREINCREMENT OPERATION
     printf("Preincrement starts here- \n");
     printf("%d \n",*++ptr); // first increases then prints


     // PRE DECREMENT OPERATION
     printf("Pre DECREMENT starts here- \n");
     printf("%d \n", *--ptr);
     
    return 0;
}