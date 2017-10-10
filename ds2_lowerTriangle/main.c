#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, row, column, j;
    int arr[100][100];

    printf("Enter the number of rows & columns in the matrix. (<100): ");
    scanf("%d", &row);
    scanf("%d", &column);
   if(row == column){
    printf("Enter the %d elements of the array\n", row*column);

    for(i = 0; i<row; i++){
            for(j=0; j<column; j++){
        scanf("%d", &arr[i][j]);
    }
    }

    puts("\nLower Triangle: ");
    for(i = 0; i<row; i++){
        for(j = 0; j<column; j++){
            if(i>=j){
                printf("%d ", arr[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
   }
   else printf("\nRows and columns must be equal!!!\n");

    return 0;
}
