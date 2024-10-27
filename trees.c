#include <stdio.h>
#include <stdlib.h>     //for malloc in createNode fucntion

typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
} Node;


Node* createNode(int data){
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->right = NULL;
    newNode->left = NULL;
    return newNode;
}


// inOrderTraversal
