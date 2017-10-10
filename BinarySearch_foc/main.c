#include <stdio.h>
#include <stdlib.h>

int main()
{
     int  i, no, first = 0, middle, last;
    int arr[100];

    printf("Enter the number of elements in the array. (<100): ");
    scanf("%d", &no);

    last = no-1;
    middle = (first + last)/2;
    printf("Enter the %d elements of the array\n", no);

    for(i = 0; i<no; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element you want to search for: ");
    scanf("%d", &target);


    return 0;
}
