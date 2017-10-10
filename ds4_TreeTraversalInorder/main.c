#include <stdio.h>
#include <stdlib.h>

struct tree{
   struct tree *left;
   int data;
   struct tree *right;
   };
   typedef struct tree TREE;

   TREE *newNode;

    static TREE *root = NULL;

//INSERT------------------------------------
TREE * insertNode(TREE *node, int num){

if(node == NULL){

    newNode = (TREE *)(malloc(sizeof(TREE)));
    newNode->data = num;
    newNode->left = NULL;
    newNode->right = NULL;
    node = newNode;
   }
 else if ((num <= node->data) && (node->left == NULL)){
        newNode = (TREE *)(malloc(sizeof(TREE)));
        newNode->data = num;
        newNode->left = NULL;
        newNode->right = NULL;
        node -> left = newNode;
}
else if ((num > node->data) && (node->right == NULL)){
        newNode = (TREE *)(malloc(sizeof(TREE)));
        newNode->data = num;
        newNode->left = NULL;
        newNode->right = NULL;
        node -> right = newNode;
}

else if (num > node->data){
    insertNode(node->right, num);
}
else if (num <= node->data){
    insertNode(node->left, num);
}
return node;
}
//DISPLAY----------------------------------------


void preOrder(TREE *r)
{

if(r!=NULL){
    printf("%d ", r->data);
    preOrder(r->left);
    preOrder(r->right);
    //PERFECTLY CORRECT. NO ELSE CONDITION REQUIRED. We shall not print NULL every time a leaf node is encountered.
}
}

void inOrder(TREE* r)
{

    if(r!=NULL){
        inOrder(r->left);
        printf("%d ", r->data);
        inOrder(r->right);
    }
}

void postOrder(TREE *r){

if(r != NULL){
    postOrder(r->left);
    postOrder(r->right);
    printf("%d ", r->data);
}
}

int main()
{
   char ch = 'n';
   int val;

    do{
        printf("\nEnter the element: ");
        scanf("%d", &val);
        root = insertNode(root, val);

        printf("Do you want to add another element to the tree? (y/n): \n");
        ch = getche();
    }
    while (ch == 'y');

puts("");
printf("PreOrder Traversal : ");
preOrder(root);

puts("");
printf("InOrder Traversal : ");
inOrder(root);

puts("");
printf("PostOrder Traversal : ");
postOrder(root);

puts("");


    return 0;
}
