#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100], i, j, lim, temp, least, num;

    printf("Enter the number of elements to be sorted (<100): ");
    scanf("%d", &lim);

    if(lim > 100){
        printf("Invalid entry. Number of elements must be less than 100!\n");
        exit(1);
    }

    printf("Enter the %d elements of the array \n", lim);
    for(i=0; i<lim; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<lim - 1; i++){
            least = i;

     for(j=i+1; j<lim; j++){
      if(arr[j] < arr[least]){
        least = j;
      }
      }
     if(least != i){
      temp = arr[i];
      arr[i] = arr[least];
      arr[least] = temp;

      }
    }
     puts("Sorted List:");
     for(i=0; i<lim; i++){
        printf("%d\n", arr[i]);
     }
    return 0;
}
