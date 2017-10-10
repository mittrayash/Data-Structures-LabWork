#include <stdio.h>
#include <stdlib.h>



int main()
{
    struct node{
    int data;
    struct node *link;
    };
    typedef struct node NODE;

    static NODE *start = NULL;
    char ch = 'y';
    int choice;

    printf("\t\INSERT INTO A LINKED LIST\n");
    puts("Where do you want to enter the node?\n1. At the Beginning\n2. At the end\n3. Before a node\n4. After a node\n");
    scanf("%d", &choice);

        //AUTO LIST
     NODE *newNode, *currentNode;
        newNode = (NODE *)(malloc(sizeof(NODE)));
        newNode->data  = 1;
        start = newNode;
        currentNode = newNode;

        newNode = (NODE *)(malloc(sizeof(NODE)));
        newNode->data = 3;
        currentNode->link = newNode;
        currentNode = newNode;

        newNode = (NODE *)(malloc(sizeof(NODE)));
        newNode->data = 7;
        currentNode->link = newNode;
        currentNode = newNode;

        currentNode->link = NULL;
         NODE *ptr = start;

printf("\n\nLinked list is as follows: \n");
    ptr = start;
    while(ptr != NULL){
        printf("%d=>", ptr->data);
        ptr = ptr->link;
    }
    printf("NULL\n");

    if(choice == 2){
    do{
        newNode = (NODE *)(malloc(sizeof(NODE)));
        puts("\nEnter a data element to be added to the Linkedlist");
        scanf("%d", &newNode->data);
        newNode->link = NULL;

            currentNode->link = newNode;
            currentNode = newNode;

        puts("\nDo you want to enter another node?(y/n)");
        ch = getche();
    }
    while(ch != 'n');
    }
    else if(choice  == 1){
        do{
        newNode = (NODE *)(malloc(sizeof(NODE)));
        puts("\nEnter a data element to be added to the Linkedlist");
        scanf("%d", &newNode->data);
        newNode->link = NULL;


        currentNode = newNode;
        currentNode->link = start;
        start = currentNode;

        puts("\nDo you want to enter another node?(y/n)");
        ch = getche();

    }
    while(ch != 'n');
    }
    else if(choice == 3){

            int num, pos, i=0;
        newNode = (NODE *)(malloc(sizeof(NODE)));
        puts("Enter the position of node before which the new node is to be added");
        scanf("%d", &num);
        pos = num - 2;
        puts("\nEnter a data element to be added to the Linkedlist");
        scanf("%d", &newNode->data);
        newNode->link = NULL;

        ptr = start;
        NODE *postPtr;

      for(i=0; i<pos; i++){
            ptr = ptr->link;
        }
        postPtr = ptr->link;

        currentNode = newNode;
        currentNode->link = postPtr;
        ptr->link = newNode;
    }

    else if(choice == 4){
        int num, pos, i=0;
        newNode = (NODE *)(malloc(sizeof(NODE)));
        puts("Enter the position of node after which the new node is to be added");
        scanf("%d", &num);
        pos = num - 1;
        puts("\nEnter a data element to be added to the Linkedlist");
        scanf("%d", &newNode->data);
        newNode->link = NULL;
         ptr = start;
        NODE *postPtr;

      for(i=0; i<pos; i++){
            ptr = ptr->link;
        }
        postPtr = ptr->link;

        currentNode = newNode;
        ptr->link = currentNode;
        currentNode->link = postPtr;
    }
    else if(choice == 5){
            int num, i=0, j=0, temp;
            NODE *ptr, *postPtr;
            currentNode = start;
        printf("Enter data to be added to the list: ");
    newNode = (NODE *)(malloc(sizeof(NODE)));
    scanf("%d", &newNode->data);
    ptr = start;
    currentNode = newNode;
   // currentNode->link = NULL;
   NODE *prePtr = start;
 ptr = start;
 int count = 0;
           while(currentNode->data > ptr->data){
       //         printf("%d %d ",currentNode->data, ptr->data);
               // if(currentNode->data > ptr->data){
if(count == 0){
    ptr = ptr->link;
}
else{
    ptr = ptr->link;
    prePtr = prePtr->link;
}
count = 1;
                    printf("%d %d %d ", currentNode->data, prePtr->data, ptr->data);

    //       printf("\n  %d   \n", ptr->data);

              //  }
              }
           //     else{
                      //  postPtr = ptr->link;
                      prePtr->link = currentNode;
                      printf("%d  %d", prePtr->data, ptr->data);
                      currentNode->link = ptr;

               //     ptr->link = currentNode;
                 //   currentNode->link = ptr;

                    ptr = start;
                   for(j=0; j<4; j++){
                        ptr = ptr->link;
                   }
                   ptr->link = NULL;


                   // ptr->link = NULL;
            //    }
           //}

    }

    else{
         printf("\nInvalid choice\n");
         exit(1);
    }



    //DISPLAY
    newNode = start;
    printf("\n\nLinked list is as follows: \n");
    while(newNode != NULL){
        printf("%d=>", newNode->data);
        newNode = newNode->link;
    }
    printf("NULL\n");





    return 0;
}
