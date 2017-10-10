#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node{
    int data;
    struct node *link;
    };
    typedef struct node NODE;
int flag = 2;
    static NODE *start = NULL;
    NODE *newNode, *currentNode;
  //AUTOLIST
    newNode = (NODE *)(malloc(sizeof(NODE)));
    newNode->data = 2;
    start = newNode;
    currentNode = newNode;

    newNode = (NODE *)(malloc(sizeof(NODE)));
    newNode->data = 7;
    currentNode->link = newNode;
    currentNode = newNode;

    newNode = (NODE *)(malloc(sizeof(NODE)));
    newNode->data = 10;
    currentNode->link = newNode;
    currentNode = newNode;

    currentNode->link = NULL;

    //DISPLAY
   apple:printf("");
        NODE *ptr = start;
    puts("LinkedList is as follows: ");
    while(ptr != NULL){
       printf("%d=>", ptr->data);
       ptr = ptr->link;
    }
    puts("NULL");
    if(flag == 1)
        exit(1);

    //Deletion
    int target;
    printf("\nEnter the index of the element to be deleted: ");
    scanf("%d", &target);
    if(target == 1){
            ptr = start;
        start = ptr->link;
    }
    else{
    int i, pos = target - 2;
    ptr = start;

    for(i=0; i<pos; i++){
            ptr = ptr->link;
        }
        NODE *postPtr = ptr->link;
        postPtr = postPtr->link;
        ptr->link = postPtr;
    }
    flag = 1;
    goto apple;

    return 0;
}
