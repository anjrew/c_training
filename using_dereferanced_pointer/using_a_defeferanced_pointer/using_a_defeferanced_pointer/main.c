//
//  main.c
//  using_a_defeferanced_pointer
//
//  Created by Andrew Johnson on 22/08/2019.
//  Copyright © 2019 Andrew Johnson. All rights reserved.
//

#include <stdio.h>

//
//  assigning_pointer_addresses.c
//  c_test
//
//  Created by Andrew Johnson on 22/08/2019.
//  Copyright © 2019 Andrew Johnson. All rights reserved.
//

#include <stdio.h>

int main(){
    
    int var1 = 10;
    int* ptr1 = &var1;
    
    printf("Value of pointer is %d\n", *ptr1);
    
    *ptr1 = 20;
    
    printf("The value of var1 is %d\n", var1);
    
    int var2;
    var2 = *ptr1;
    
    printf("The value of var2 %d\n", var2);
}



