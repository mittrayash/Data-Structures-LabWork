#include <stdio.h>
#include <stdlib.h>

int main()
{
     int arr[] = {1, 2, 5, 6, 7, 8, 5, 88, 4, 11 , 32, 23, 43, 21, 63};
     int i, j, target;

      j = sizeof(arr);
     int arraySize = j/4;

      for(i = 0; i< arraySize; i++){
        printf("%d\n", arr[i]);
      }
     printf("Enter the index of the value to be deleted: ");
     scanf("%d", &target);

     for(i = target-1; i< 14; i++){
        arr[i] = arr[i+1];
     }
     printf("\n");
      for(i = 0; i< arraySize-1; i++){
        printf("%d\n", arr[i]);
      }
    return 0;
}
