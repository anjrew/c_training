//
//  node.h
//  linked_list
//
//  Created by Andrew Johnson on 01/09/2019.
//  Copyright © 2019 Andrew Johnson. All rights reserved.
//

#ifndef node_h
#define node_h

#include <stdio.h>

typedef struct node
{
    char data;
    struct node * next; //or link
} node;

#endif /* node_h */
