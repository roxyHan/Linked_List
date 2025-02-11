//
// Created by Hanifa on 11/24/2019.
//

#ifndef LINKED_LIST_LIST_H
#define LINKED_LIST_LIST_H

struct node {
    int val;
    struct node *next;
};

int length(struct node *); //get the length of the list
void print(struct node *, int);//print a certain number of elements from the list starting with the first node
struct node * push(struct node *, int); //put at front
struct node * append(struct node *, int); //put at back
struct node * clear(struct node *); //delete entire list
struct node * remove_node(struct node *, int); //delete a particular node
struct node * sort_ascending(struct node *); //sort the nodes in ascending order
struct node * sort_descending(struct node *); //sort the nodes in descending order

// insert into a specific location in the list
struct node * insert_middle(struct node *, int val, int idx);



#endif //LINKED_LIST_LIST_H
