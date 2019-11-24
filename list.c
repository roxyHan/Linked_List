//
// Created by Hanifa on 11/24/2019.
//

#include "list.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * get the length of the list
 * @param head
 * @return
 */
int length(struct node * head){
    int count = 0;
    while(head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

/**
 * print a certain number of elements from the list starting with the first node
 * @param head
 * @param value
 */
void print(struct node * head, int value){

}

/**
 * put at front
 * @param head
 * @param value
 * @return
 */
struct node * push(struct node * head, int value){
    struct node * aNode;
    aNode = malloc(sizeof(struct node));
    aNode->val = value;
    aNode->next = head;
    head = aNode;
}

/**
 * put at back
 * @param head
 * @param value
 * @return
 */
struct node * append(struct node * head, int value){
    struct node * aNode = head;
    while(aNode->next != NULL) {
        aNode = aNode->next;
    }
    aNode->next = malloc(sizeof(struct node));
    aNode->next->val = value;
    aNode->next->next = NULL;
}

/**
 * delete entire list
 * @param head
 * @return
 */
struct node * clear( struct node * head){
    struct node *currentNode = head;
    struct node* nextNode;

    while (currentNode != NULL)
    {
        nextNode = (currentNode)->next;
        free(currentNode);
        currentNode = nextNode;
    }

    /* deref head_ref to affect the real head back
       in the caller. */
    head = NULL;
}

/**
 * delete a particular node
 * @param head
 * @param value
 * @return
 */
struct node * remove_node(struct node * head, int value){

}

/**
 * sort the head in ascending order
 * @param head
 * @return
 */
struct node * sort_ascending(struct node * head){

}

/**
 * sort the head in descending order
 * @param head
 * @return
 */
struct node * sort_descending(struct node * head){

}

/**
 * insert into a specific location in the list
 * @param head
 * @param val
 * @param idx
 * @return
 */
struct node * insert_middle(struct node * head, int val, int idx){

}
