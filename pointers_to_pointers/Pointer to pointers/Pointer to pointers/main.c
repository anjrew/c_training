//
//  main.c
//  Pointer to pointers
//
//  Created by Andrew Johnson on 25/08/2019.
//  Copyright © 2019 Andrew Johnson. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    
    int var1 = 5;
    int* ptr1 = &var1;
    
    int** ptr2 = &ptr1;
    
    printf("The adddres of ptr1 is: %p\n", &ptr1);
    printf("The value of ptr2 is %p\n", ptr2);
    
    // To get the address
    printf("The address of var1 is %p\n", &var1 );
    printf("The value of ptr1 is %p\n", ptr1);
    printf("The value at ptr2 is %p\n", ptr2);
    
    // To get the value
    // To get the address
    printf("The value of var1 is %d\n", var1 );
    printf("The value at ptr1 is %d\n", *ptr1);
    printf("The value at address contained in ptr2 is %d \n", **ptr2);
    
    return 0;
}
