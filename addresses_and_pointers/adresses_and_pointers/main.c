//
//  assigning_pointer_addresses.c
//  c_test
//
//  Created by Andrew Johnson on 22/08/2019.
//  Copyright © 2019 Andrew Johnson. All rights reserved.
//

#include <stdio.h>

int main(){
    
    int val = 5;
    int*pointer;
    
    pointer = &val;
    
    printf("The addess of val is %p \n", &val );
    printf("and the value of val is %d\n", val);
    printf("And to confirm %p \n", pointer);
    
    printf("The address of the pointer is %p \n", &pointer);
    printf("Accessing the value at the point with dereferancing is %d/n", *pointer);
    
    printf("\n");
    int val2 = 5;
    int*pointer2;
    
    pointer2 = val2;
    
    printf("The addess of val2 is %p \n", &val2);
    printf("And to confirm the actual value of pointer2 is %p \n",pointer2 );
    
    printf("The address of the pointer2 is %p \n", &pointer2);
    
    printf("\n");
    int val3 = 5;
    int pointer3;
    
    pointer2 = val3;
    
    printf("The addess of val3 is %p \n", &val3);
    printf("And to confirm the actual value of pointer3 is %d \n",pointer3 );
    
    printf("The address of the pointer3 is %p \n", &pointer3);
}


