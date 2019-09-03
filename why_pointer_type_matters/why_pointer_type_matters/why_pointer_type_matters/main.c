//
//  main.c
//  why_pointer_type_matters
//
//  Created by Andrew Johnson on 22/08/2019.
//  Copyright © 2019 Andrew Johnson. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int var1 = 1000;
    
    // The integer has 4 bytes worth of memory and the max value can be 2,147,483,647
    int*ptr1 =&var1;
    
    // The character datatype only has 1 bytes worth of memory and it max value can be signed 127 and 255 unsigned
    char*ptr2=&var1;
    
    // Because the char pointer is allocated the wrong data type it only looks for the first byte inMemory and so gives an incorrect value as to
    // get the whole picture of var1 which is a int we need acces to all the 4 bytes of memory of the int type.
    printf("The value at pointer 1 is %d\n", *ptr1 );
    printf("The value at pointer 2 is %d\n", *ptr2);
    
    return 0;
}
