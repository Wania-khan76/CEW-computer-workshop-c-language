#ifndef LINKEDLIST_H
#define LINKEDLIST_H
// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};
// Function to create a new node
struct Node* createNode(int data);
// Function to insert a node at the beginning of the linked list
struct Node* insertAtBeginning(struct Node* head, int data);
// Function to insert a node at the end of the linked list
struct Node* insertAtEnd(struct Node* head, int data);
// Function to insert a node after a specific node
struct Node* insertAfter(struct Node* head, int data, int searchValue);
// Function to delete a node with a specific value
struct Node* deleteNode(struct Node* head, int data);
// Function to search for a node with a specific value
struct Node* searchNode(struct Node* head, int data);
// Function to print the linked list
void printList(struct Node* head);
// Function to free the memory used by the linked list
void freeList(struct Node* head);

#endif // LINKEDLIST_H
