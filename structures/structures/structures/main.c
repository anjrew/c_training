//
//  main.c
//  structures
//
//  Created by Andrew Johnson on 30/08/2019.
//  Copyright © 2019 Andrew Johnson. All rights reserved.
//

#include <stdio.h>
#include "user.h"

int main(int argc, const char * argv[]) {
    
    struct cheese ch;
    
    ch.age = 32;
    strcpy(ch.firstName, "Andrew");
    strcpy(ch.lastName, "Johnson");
    ch.userId = 1;
    ch.weight = 32;
    // insert code here...
    printf("The first name is %s and the last name is %s!\n", ch.firstName, ch.lastName);
    printf("The weight of the user is %f.\n", ch.weight);
    printf("That was with dot notation\n");
    printf("And with arrow notaion: \n");
    return 0;
}
