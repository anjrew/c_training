//
//  main.c
//  linked_list
//
//  Created by Andrew Johnson on 01/09/2019.
//  Copyright © 2019 Andrew Johnson. All rights reserved.
//

#include <stdio.h>
#include "node.h"



node * createLinkedList(int n)
{
    node* temp = NULL;
    node* head = NULL;
    node* p = NULL;
    
    for (int i = 0 ; i <n; i++)
    {
        temp = (node*) malloc(sizeof(node));
        printf("\n Enter the data for the number: ", i+1);
        scanf("%d", &(temp->data));
        
        temp->next = NULL;
        
        if (head == NULL) // If the list is empty make the first node
        {
            head = temp;
        }
        else{
            // Something wrong here
            p = head;
            while(p->next != NULL)
            {
                p = p -> next;
            }
            p->next = temp;
        }
    }
    return head;
};

node* insert(node* head, int position, char insertValue){
    node* temp = head;
    int curPos = 0;
    for (int i = 0; temp->next != NULL; i++) {
        if (i == position - 1) {
            node* newNode = (node*) malloc(sizeof(node));
            newNode->next = temp->next;
            temp->next = newNode;
            newNode->data = insertValue;
            break;
        }
        temp = temp->next;
    }
    return temp;
}

void removeElement(int position){
    
}

void displayList(node* head){
    node * p = head;
    while(p->next != NULL)
    {
        printf("\t%d", p->data);
        p = p->next;
    }
    if (p->data != NULL){
        printf("\t%d", p->data);
    }
    printf("\n");
}


int main() {
    // insert code here...
    printf("Hello, World!\n");
    
    printf("\n How many nodes: ");
    int nodes = 0;
    scanf("%d", &nodes);
    
    node * HEAD = createLinkedList(nodes);
    
    displayList(HEAD);
    
    node * insertElement = insert(HEAD, 2, 9);
    
    displayList(HEAD);
    
    return 0;
}

