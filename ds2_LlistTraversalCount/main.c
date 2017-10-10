#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node{
    int data;
    struct node *link;
    };
    typedef struct node NODE;
    puts("\t\tCREATE A LINKED LIST");
    static NODE *start = NULL;
    NODE *currentNode;
    char ch = 'y';
    int count = 0;
    do{
    NODE *newNode;
    newNode = (NODE *)malloc(sizeof(NODE));

    printf("\nEnter the data value: ");
    scanf("%d", &newNode->data);
    newNode->link = NULL;

    if(start == NULL){
        start = newNode;
        currentNode = newNode;
    }
    else{
        currentNode->link = newNode;
        currentNode = newNode;
    }
    count++;
    puts("\nDo you want to add more elements?: ");
    ch = getche();

    }
    while(ch != 'n');
    //DISPLAY

    NODE *ptr = start;
    puts("\nTraversing the LinkedList\n\n");
    while(ptr != NULL){
    printf("%d=>", ptr->data);
    ptr = ptr->link;
    }
    puts("NULL");
   //COUNT
   printf("Total number of elements in the list = %d", count);

    return 0;
}
