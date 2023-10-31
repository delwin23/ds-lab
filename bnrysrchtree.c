#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int key; //key value is the item we can search in this also
    struct node *left,*right;
};
 
struct node* newNode(int item)
{
    struct node* temp
        = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}


/* if the item we search is less than root we r searching,so if item=20,and root is 45,  
(item)<root->data,
root=root->left  */


// a new node with given key in BST
struct node* insert(struct node* node, int key)
{
    // If the tree is empty, return a new node
    
    if (node == NULL)
        return newNode(key);
 
   
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
 
    return node;
}





