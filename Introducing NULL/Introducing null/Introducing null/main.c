//
//  main.c
//  Introducing null
//
//  Created by Andrew Johnson on 23/08/2019.
//  Copyright © 2019 Andrew Johnson. All rights reserved.
//

#include <stdio.h>
// Gives access to the exit function
# include <stdlib.h>

int main(int argc, const char * argv[]) {
    int* ptr1;
    ptr1 = NULL;
    
    int var1 = 5;
    ptr1 = &var1;
    
    if (ptr1 != NULL){
        printf("The value at ptr1 is %d \n", *ptr1);
    } else {
        printf("Pointer is NULL; exiting program\n");
        exit(0);
    }
}
