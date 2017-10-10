#include <stdio.h>
#include <stdlib.h>

int main()
{
    int LINK[11], INFO[11];
    LINK[0]=4;LINK[1]=8;LINK[2]=9;LINK[3]=7;LINK[4]=2;LINK[5]=0;LINK[6]=-1;LINK[7]=5;LINK[8]=6;LINK[9]=1;LINK[10]=3;
    INFO[0]=5;INFO[3]=3;INFO[4]=2;INFO[5]=1;INFO[7]=21;INFO[10]=2;
     int AVAIL = 2, data, START = 10, NEW, PTR = START;
    char num = 'y';
    printf("LIST : \n");

    while(PTR != -1){
        printf("%d\n", INFO[PTR]);
        PTR = LINK[PTR];
    }
    while(num != 'n'){
    printf("Enter the data to be added to the list");
    scanf("%d", &data);
    INFO[AVAIL] = data;
    NEW = AVAIL;
    AVAIL = LINK[AVAIL];
    LINK[NEW] = START;
    PTR = NEW;
    printf("Wanna enter another element? (y/n)");
    num = getche();
    }

    printf("LIST : \n");
    while(PTR != -1){
        printf("%d\n", INFO[PTR]);
        PTR = LINK[PTR];
    }

    return 0;
}
