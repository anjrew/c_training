//
//  main.c
//  size_of
//
//  Created by Andrew Johnson on 22/08/2019.
//  Copyright © 2019 Andrew Johnson. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    ///Format specifier %u is for size of
    printf("The size of the datatype int is %u\ bytes n", sizeof(int));
    printf("The size of the datatype char is %u bytes\n", sizeof(char));
    printf("The size of the datatype double is %u bytes\n", sizeof(double));
    printf("The size of the datatype pointer to char is %u bytes\n", sizeof(char*));
    printf("The size of the datatype pointer to int is %u bytes\n", sizeof(int*));
    printf("The size of the datatype pointer to double is %u bytes\n", sizeof(double*));
    printf("A byte is made of 8 bits of 1 or 0 vlaues\n");
    printf("The maximum amount of values a byte can produce is 256 ranging from 0 to 255");
}
