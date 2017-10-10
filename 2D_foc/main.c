#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i, j,k, row, column, choice, row2, column2, sum = 0;
    int arr[100][100], arr2[100][100], arr3[100][100];

    puts("1. Traversal of a matrix\n2. Addition of matrix\n3. Subtraction of matrix\n4. Multiplication of matrix\n5. Transverse of matrix");
    puts("Enter your choice: ");
    scanf("%d", &choice);

   if(choice == 1){
    printf("Enter the number of rows & columns in the matrix. (<100): ");
    scanf("%d", &row);
    scanf("%d", &column);

    printf("Enter the %d elements of the array\n", row*column);


    for(i = 0; i<row; i++){
            for(j=0; j<column; j++){
        scanf("%d", &arr[i][j]);
    }
    }
   printf("\nTraversing the array: \n");

    for(i = 0; i<row; i++){
            for(j=0; j<column; j++){
        printf("%d ", arr[i][j]);
    }
    printf("\n");
    }
   }
   else if(choice == 2){

    printf("Enter the number of rows & columns of the first matrix. (<100): ");
    scanf("%d", &row);
    scanf("%d", &column);

    printf("Enter the number of rows & columns of the second matrix. (<100): ");
    scanf("%d", &row2);
    scanf("%d", &column2);

    printf("Enter the %d elements of the first array\n", row*column);
    for(i = 0; i<row; i++){
            for(j=0; j<column; j++){
        scanf("%d", &arr[i][j]);
    }
    }
    printf("Enter the %d elements of the second array\n", row2*column2);
    for(i = 0; i<row2; i++){
            for(j=0; j<column2; j++){
        scanf("%d", &arr2[i][j]);
    }
    }
  if((row == row2) &&(column2==column)){
    for(i = 0; i<row; i++){
        for(j=0; j<column; j++){
            arr3[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    puts("Resultant matrix: \n");
    for(i = 0; i<row; i++){
            for(j=0; j<column; j++){
        printf("%d ", arr3[i][j]);
    }
    printf("\n");
   }
  }
  else{
    printf("The arrays cannot be added.");

  }
   }
   else if (choice == 3){

    printf("Enter the number of rows & columns of the first matrix. (<100): ");
    scanf("%d", &row);
    scanf("%d", &column);

    printf("Enter the number of rows & columns of the second matrix. (<100): ");
    scanf("%d", &row2);
    scanf("%d", &column2);

    printf("Enter the %d elements of the first array\n", row*column);
    for(i = 0; i<row; i++){
            for(j=0; j<column; j++){
        scanf("%d", &arr[i][j]);
    }
    }
    printf("Enter the %d elements of the second array\n", row2*column2);
    for(i = 0; i<row2; i++){
            for(j=0; j<column2; j++){
        scanf("%d", &arr2[i][j]);
    }
    }
  if((row == row2) &&(column2==column)){
    for(i = 0; i<row; i++){
        for(j=0; j<column; j++){
            arr3[i][j] = arr[i][j] - arr2[i][j];
        }
    }
    puts("Resultant matrix: \n");
    for(i = 0; i<row; i++){
            for(j=0; j<column; j++){
        printf("%d ", arr3[i][j]);
    }
    printf("\n");
   }
  }
  else{
    printf("The arrays cannot be added.");

  }
   }
   else if(choice == 4){
    printf("Enter the number of rows & columns of the first matrix. (<100): ");
    scanf("%d", &row);
    scanf("%d", &column);

    printf("Enter the number of rows & columns of the second matrix. (<100): ");
    scanf("%d", &row2);
    scanf("%d", &column2);

    printf("Enter the %d elements of the first array\n", row*column);
    for(i = 0; i<row; i++){
            for(j=0; j<column; j++){
        scanf("%d", &arr[i][j]);
    }
    }

    printf("Enter the %d elements of the second array\n", row2*column2);
    for(i = 0; i<row2; i++){
            for(j=0; j<column2; j++){
        scanf("%d", &arr2[i][j]);
    }
    }
    for(i = 0; i<row; i++){
    for(j=0; j<column; j++){
            for(k = 0; k<column2; k++){
          sum = sum + arr[i][k]*arr2[k][j];
            }
          arr3[i][j] = sum;
        sum = 0;
            }
    }
    printf("\nProduct of matrices is : \n");

     for(i = 0; i<row; i++){
            for(j=0; j<column; j++){
        printf("%d ", arr3[i][j]);
    }
    printf("\n");
   }
   }
   else if(choice == 5){
    printf("Enter the number of rows & columns in the matrix. (<100): ");
    scanf("%d", &row);
    scanf("%d", &column);

    printf("Enter the %d elements of the array\n", row*column);

    for(i = 0; i<row; i++){
            for(j=0; j<column; j++){
        scanf("%d", &arr[i][j]);
    }
    }
    printf("Transpose of this matrix is : \n");
    for(i = 0; i<row; i++){
            for(j=0; j<column; j++){
        printf("%d ", arr[j][i]);
    }
    printf("\n");
   }
   }
    return 0;
}
