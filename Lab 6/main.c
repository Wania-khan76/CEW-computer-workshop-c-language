#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkedlist.h"
#include "matrix.h"
#include "file.h"

int main()
{   int res;
    const filename="lab6.txt";
    char str[50]="Abdus Samad\n";
    res=existingFile(filename);
    if (res==1){
    writeIntoFile(filename,str);
    strcpy(str,"I am first year student.\n");
    writeIntoFile(filename,str);
    readFromFile(filename);
    }
    else if(res==0){
        printf("File does not exist.");
    }

}


int main(){
    struct Node* head = NULL;
    // Insert nodes at the beginning
    head = insertAtBeginning(head, 3);
    head = insertAtBeginning(head, 2);
    head = insertAtBeginning(head, 1);
    // Insert nodes at the end
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 5);
    // Insert a node after a specific value
    head = insertAfter(head, 6, 3);
    // Print the linked list
    printf("Linked List: ");
    printList(head);
    // Search for a node
    int searchValue = 4;

    struct Node* foundNode = searchNode(head, searchValue);
    if (foundNode != NULL) {
    printf("Node with value %d found\n", searchValue);
    } else {
    printf("Node with value %d not found\n", searchValue);
    }
    // Delete a node
    int deleteValue = 2;
    head = deleteNode(head, deleteValue);
    // Print the linked list after deletion
    printf("Linked List after deletion: ");
    printList(head);
    // Free the memory
    freeList(head);
    return 0;
}


int main(){
   // Create matrices
    struct Matrix mat1 = creatematrix(3, 3);
    struct Matrix mat2 = creatematrix(3, 3);

    // Initialize matrices with values
    mat1.data[0][0] = 1; mat1.data[0][1] = 2; mat1.data[0][2] = 3;
    mat1.data[1][0] = 4; mat1.data[1][1] = 5; mat1.data[1][2] = 6;
    mat1.data[2][0] = 6; mat1.data[2][1] = 4; mat1.data[2][2] = 8;

    mat2.data[0][0] = 7; mat2.data[0][1] = 8; mat2.data[0][2] = 3;
    mat2.data[1][0] = 9; mat2.data[1][1] = 7; mat2.data[1][2] = 6;
    mat2.data[2][0] = 1; mat2.data[2][1] = 6; mat2.data[2][2] = 8;

    // Print matrices
    printf("Matrix 1:\n");
    printmatrix(mat1);

    printf("Matrix 2:\n");
    printmatrix(mat2);

    // Perform matrix operations
    struct Matrix sum = addition(mat1, mat2);
    printf("Sum of matrices:\n");
    printmatrix(sum);

    struct Matrix product = multiplication(mat1, mat2);
    printf("Product of matrices:\n");
    printmatrix(product);

    struct Matrix trans = transpose(mat1);
    printf("Transpose of Matrix 1:\n");
    printmatrix(trans);
    struct Matrix mat3=creatematrix(2,2);
    mat3.data[0][0] = 1; mat3.data[0][1] = 2;
    mat3.data[1][0] = 4; mat3.data[1][1]=4;
    printf("Matrix 3:\n");
    printmatrix(mat3);
    int det = determinant3x3(mat3);
    printf("Determinant of Matrix 3: %d\n", det);
    return 0;
}


