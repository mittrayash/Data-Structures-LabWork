#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k , num=1;

    printf("Enter the number of iterations\n");
    scanf("%d", &n);
    int no = n;
    for(i=0; i<n; i++){

        for(j=no; j>=0; j--){
            printf(" ");
        }

        for(k=0; k<num; k++){
            printf("%d ", num);
        }
        num++;
        printf("\n");
        no--;
    }

    return 0;
}
