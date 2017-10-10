#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i, no;
    int arr[100];

    printf("Enter the number of elements in the array. (<100): ");
    scanf("%d", &no);

    printf("Enter the %d elements of the array\n", no);

    for(i = 0; i<no; i++){
        scanf("%d", &arr[i]);
    }
   printf("\nTraversing the array: \n");
    for(i = 0; i<no; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}
