#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Type identifiers for data
enum DataType
{
    INT,
    FLOAT,
    STRING
};

// Define a union to hold different data types
union Value
{
    int i;
    float f;
    char *s;
};

// Struct to hold data with type
struct Data
{
    enum DataType type;
    union Value value;
};

// Linked list node
struct Node
{
    struct Data data;
    struct Node *next;
};

// Function to create a node with int
struct Node *createIntNode(int val)
{
    struct Node *node = malloc(sizeof(struct Node));
    node->data.type = INT;
    node->data.value.i = val;
    node->next = NULL;
    return node;
}

// Function to create a node with float
struct Node *createFloatNode(float val)
{
    struct Node *node = malloc(sizeof(struct Node));
    node->data.type = FLOAT;
    node->data.value.f = val;
    node->next = NULL;
    return node;
}

// Function to create a node with string
struct Node *createStringNode(const char *val)
{
    struct Node *node = malloc(sizeof(struct Node));
    node->data.type = STRING;
    node->data.value.s = malloc(strlen(val) + 1); // Allocate memory for string
    strcpy(node->data.value.s, val);
    node->next = NULL;
    return node;
}

// Print the entire list
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        switch (temp->data.type)
        {
        case INT:
            printf("[int: %d] -> ", temp->data.value.i);
            break;
        case FLOAT:
            printf("[float: %.2f] -> ", temp->data.value.f);
            break;
        case STRING:
            printf("[string: \"%s\"] -> ", temp->data.value.s);
            break;
        }
        temp = temp->next;
    }
    printf("NULL\n");
}

// Free the list
void freeList(struct Node *head)
{
    struct Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        if (temp->data.type == STRING)
        {
            free(temp->data.value.s); // Free string memory
        }
        free(temp);
    }
}

int main()
{
    // Create a mixed-type list: 42 → 3.14 → "Hello" → 99
    struct Node *head = createIntNode(42);
    head->next = createFloatNode(3.14f);
    head->next->next = createStringNode("Hello, World!");
    head->next->next->next = createIntNode(99);

    printList(head);
    freeList(head);
    return 0;
}
