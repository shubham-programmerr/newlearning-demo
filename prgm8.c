#include<stdio.h>
#include<stdlib.h>

// Define the node structure
struct node {
    int data;
    struct node *next;
};

// Function to create nodes in the linked list
struct node* creation_node(struct node *head) { 
    struct node *ptr;
    struct node *newnode;
    int value, i, size = 3; // Set the size of the list to 3

    for(i = 0; i < size; i++) {
        newnode = (struct node *)malloc(sizeof(struct node)); // Correct memory allocation
        if (newnode == NULL) {
            printf("Memory allocation failed.\n");
            return head;
        }

        printf("Enter the data for node: ");
        scanf("%d", &value);
        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL) {
            // If the list is empty, new node becomes the head
            head = newnode;
            printf("Head node = %d\n", head->data);
        } else {
            // Traverse to the end of the list
            ptr = head;
            while(ptr->next != NULL) {  // Correct condition
                ptr = ptr->next;
            }
            ptr->next = newnode;  // Append the new node
            printf("Insert successful\n");
        }
    }

    return head;  // Return the updated head
}

// Function to display the linked list
void display(struct node *head) {
    struct node *ptr = head;

    if(head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    printf("The linked list is: ");
    while(ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main() {
    struct node *head = NULL;  // Initialize head as NULL, representing an empty list

    // Create nodes in the linked list and update the head
    head = creation_node(head);

    // Display the linked list
    display(head);

    return 0;
}
