#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, temp, num;
    int arr[50];
    puts("Enter the size of array.");
    scanf("%d", &num);
    printf("\nEnter %d elements of the array\n", num);
    for(i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < num; i++){//10 elements means 9 passes needed
        for(j = 0; j < num-i-1; j++){//10 elements means check 9 first time, 8 second time(last item will be the largest already)

            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }

        }

    }

    puts("\nSorted array: ");
    for(i=0; i<num; i++)
        printf("%d ", arr[i]);
    return 0;
}
