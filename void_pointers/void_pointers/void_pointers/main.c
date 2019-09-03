//
//  main.c
//  void_pointers
//
//  Created by Andrew Johnson on 23/08/2019.
//  Copyright © 2019 Andrew Johnson. All rights reserved.
//

#include <stdio.h>

int main() {
    int var1 = 10;
    void* ptr1 = &var1;
    printf("The value of ptr1 is: %p\n", ptr1);
    printf("Theaddress of var1 is %p\n", &var1);
    // We can not dereferance a void pointer of the type is notknown.
//    printf("The value at ptr1 is: %d\n", *ptr1);
    
//    int* ptr2;
//    ptr2 = (int*) ptr2;
//    printf("The value at ptr2 is: %d\n", *ptr2);
    
    // I am going to derefernace the pointer 
    printf("The value at ptr2 is: %d\n",*((int*) ptr1));
    
    return 0;
}
