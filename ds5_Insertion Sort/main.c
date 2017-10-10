#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[100], i, j, lim, val, hole;

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


    for(i=1; i<lim; i++){
        hole = i;
        val = arr[i];

        while(hole>=0 && arr[hole-1]>val){

            arr[hole] = arr[hole-1];
            hole = hole-1;
      }
      arr[hole] = val;
    }
    puts("Sorted List: ");
    for(i=0; i<lim; i++){
        printf("%d\n", arr[i]);
     }
    return 0;
}
