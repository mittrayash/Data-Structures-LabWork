#include <stdio.h>
#include <stdlib.h>

int main()
{   //INSERT
    int i, num;

    struct node{
    int data;
    struct node* next;
    };
    typedef struct node NODE;
    static NODE  *start = NULL;
    char ch = 'y';

    printf("\t\tCREATE A LINKED LIST");

    NODE *newNode, *currentNode;
        newNode = (NODE *)(malloc(sizeof(NODE)));
        newNode->data  = 1;
        start = newNode;
        currentNode = newNode;
        newNode = (NODE *)(malloc(sizeof(NODE)));
        newNode->data = 3;
        currentNode->next = newNode;
        currentNode = newNode;
        newNode = (NODE *)(malloc(sizeof(NODE)));
        newNode->data = 7;

        currentNode->next = newNode;
        currentNode = newNode;
        currentNode->next = NULL;
        NODE *ptr = start;

    printf("\n\nLinked list is as follows: \n");
    while(ptr != NULL){
        printf("%d=>", ptr->data);
        ptr = ptr->next;
    }
      /*   NODE *newNode = start;
    printf("\n\nLinked list is as follows: \n");
    while(newNode != NULL){
        printf("%d=>", newNode->data);
        newNode = newNode->next;
    }*/
    printf("NULL\n");
    do{

    newNode = (NODE *)(malloc(sizeof(NODE)));
    puts("\nEnter an element to be added to the LinkedList");
    scanf("%d", &newNode->data);
    newNode->next = NULL;


         //Address of next in the current currentNode
         //being changed to NewNode's address
         currentNode->next = newNode;
         //Address of current node being
         //changed to address of newNode
         //so that next time when we give address to
         //current node it'll be the newest node's address
         currentNode = newNode;

    printf("Do you want to add another node(y/n)\n");
    ch = getche();
    }
    while (ch != 'n');
    //DISPLAY
    newNode = start;
    printf("\n\nLinked list is as follows: \n");
    while(newNode != NULL){
        printf("%d=>", newNode->data);
        newNode = newNode->next;
    }
    printf("NULL\n");
    return 0;
}
