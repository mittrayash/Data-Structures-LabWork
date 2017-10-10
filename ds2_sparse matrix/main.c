#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j,  count = 0;
    float row, column;
    int arr[50][50];

    printf("\t\t CHECK SPARSITY OF A MATRIX\n");
    puts("Enter the number of rows & columns of the matrix. (<50)");
    scanf("%f", &row);
    scanf("%f", &column);

   float min = (row*column)/2;
   printf("Enter the %d elements of the matrix\n", (int)(row*column));
    for(i=0; i<(int)row; i++){
        for(j=0; j<(int)column; j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j] == 0)
                count++;
        }
    }



    if(count>=min){
        printf("\nThe matrix entered is a sparse matrix\n");
    }
    else{
        printf("\nThe matrix entered is not a sparse matrix\n");
    }
    return 0;
}
