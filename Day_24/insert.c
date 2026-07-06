#include <stdio.h>
#include <malloc.h> // #include <alloc.h>
#include <stdlib.h>

struct Node
{
	int num;      
	struct Node *next;
};

struct Node *start;

// insert at beg:

// step 1: create a Node
    // struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    // printf("Enter data of node: ");
    // scanf("%d", &ptr->num);
    // ptr->next = NULL;

// step 2:
    // if start == NULL:
        // start = ptr;
    // else:
        // ptr -> next = start