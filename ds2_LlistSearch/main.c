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

    //Search
    printf("Please enter if the list is sorted or not? (y/n)\n");
    ch = getche();
    printf("\nPlease enter the search item: ");
    int target, count = 1;
    static int flag = 0;
    scanf("%d", &target);
    if(ch=='n'){
    NODE *ptr = start;

    while(ptr != NULL){
    if(ptr->data == target){
        printf("\nInstant of this element at position = %d\n\n", count);
        flag = 1;
    }
    ptr = ptr->link;
    count++;
    }
    if(flag == 0){
        puts("\nNo instances of this element found in the list");
        }}
    else if (ch == 'y'){
            NODE *ptr = start;

    while(ptr != NULL){
        if(ptr->data == target){
        printf("\nInstant of this element at position = %d\n\n", count);
        flag = 1;
    }
    else if(ptr->data > target)
        break;

    ptr = ptr->link;
    count++;
    }
    if(flag == 0){
        puts("\nNo instances of this element found in the list");
    } }
    else printf("\nInvalid Entry");
return 0;
}


