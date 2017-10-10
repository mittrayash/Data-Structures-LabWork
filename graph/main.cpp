#include <iostream>
#include <dos.h>
#include <conio.h>
#include <graphics.h>
#include <stdio.h>
int main()
{
     int gd = DETECT, gm, errorCode;
     initgraph(&gd, &gm, "C:\\TC\\BGI");

     errorCode = graphresult();
     if(errorCode != 0){

        printf("Graphic Error", grapherrormsg(errorCode));
        exit(1);
     }
        line(100, 100, 200, 200);
        line(200, 200, 0, 200);
        getch();
        closegraph();


    return 0;
}
