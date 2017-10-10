#include <stdio.h>
#include <stdlib.h>

int main()
{
   struct node{
   int info;
   struct node* next;
   };
   typedef struct node NODE;

   static NODE *start = NULL;

   char ch = 'y';

   /*do{
    NODE *newNode, *currentNode;
    newNode = (NODE *)(malloc(sizeof(NODE)));
    puts("\nEnter an element to be added to the LinkedList");
    scanf("%d", &newNode->data);
    newNode->next = NULL;*/


   puts("\t\tCREATE A LINKED LIST");
   while(ch != 'n'){
        NODE *currentNode, *newNode;
    newNode = (NODE *)(malloc(sizeof(NODE)));
        printf("Enter an element to be added to the list: ");
        scanf("%d", &newNode->info);
        newNode->next = NULL;

      if(start == NULL){
            currentNode = newNode;
            start = newNode;
        }
       else{
          currentNode->next = newNode;
            currentNode = newNode;
        }

        printf("\nDo you wish to enter another element? (y/n)\n");
        ch = getche();


   }

   //DISPLAY
   printf("\nThe List is as follows: \n");
   NODE* ptr = start;
   while(ptr != NULL){
    printf("%d \n", ptr->info);
    ptr = ptr->next;

}
   printf("\nNULL");
    return 0;
}
