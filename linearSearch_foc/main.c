#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 2, 5, 6, 7, 8, 5, 88, 4, 11 , 32, 23, 43, 21, 63};
    int  i,j,k=0, count = 0, target;
    static int flag = 0;
    int index[50];
    j = sizeof(arr);
     int arraySize = j/4;

      for(i = 0; i< arraySize-1; i++){
        printf("%d\n", arr[i]);
      }
     printf("Enter the value to be searched: ");
     scanf("%d", &target);

     for(i=0; i<=arraySize; i++){
        if(arr[i] == target){
            index[k] = i+1;
            k++;
            count++;
            flag = 1;
        }
     }
     if(flag == 0){
        printf("No such element exits in the array\n\n");
     }
     else{
        printf("The instances of the element can be seen at the following indexes: \n");

        for(i= 0; i<count; i++)
         printf("%d\n", index[i]);
     }
    return 0;
}
