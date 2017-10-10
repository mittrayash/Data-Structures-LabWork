#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i, j,k, no;
    int arr[100];

    printf("Enter the number of elements in the array. (<100): ");
    scanf("%d", &no);

    printf("Enter the %d elements of the array\n", no);

    for(i = 0; i<no; i++){
        scanf("%d", &arr[i]);
    }
    printf("Elements in ascending order are as follows: \n");

    for(k=0; k<no; k++){
        for(j=k; j<no; j++){
            if(arr[j]<arr[k]){
                int temp = arr[k];
                arr[k] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i = 0; i<no; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
