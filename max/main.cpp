#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void clip(float,float,float);
int i,j=0,n;
int rx1,rx2,ry1,ry2;
float x1[8],y111[8];
int main()
{
int gd=DETECT,gm;
int i,n = 2;
float x[8],y[8],m;

initgraph(&gd,&gm,"");
printf("coordinates for rectangle : ");
scanf("%d%d%d%d",&rx1,&ry1,&rx2,&ry2);
printf("coordinates of line : ");
for(i=0;i<2;i++)
{
scanf("%f%f",&x[i],&y[i]);
}
cleardevice();
outtextxy(10,10,"Before clipping");
outtextxy(10,470,"Press any key....");
rectangle(rx1,ry1,rx2,ry2);
for(i=0;i<n-1;i++)
line(x[i],y[i],x[i+1],y[i+1]);
line(x[i],y[i],x[0],y[0]);
getch();
cleardevice();
for(i=0;i<n-1;i++)
{
m=(y[i+1]-y[i])/(x[i+1]-x[i]);
//clip(x[i],y[i],m);
while(x[i]<rx1 || x[i]>rx2 || y[i]<ry1 || y[i]>ry2)
{
if(x[i]<rx1)
{
y[i]+=m*(rx1-x[i]);
x[i]=rx1;
}
else if(x[i]>rx2)
{
y[i]+=m*(rx2-x[i]);
x[i]=rx1;
}
if(y[i]<ry1)
{
x[i]+=(ry1-y[i])/m;
y[i]=ry1;
}
else if(y[i]>ry2)
{
x[i]+=(ry2-y[i])/m;
y[i]=ry2;
}
x1[j]=x[i];
y111[j]=y[i];
j++;
}
}
//clip(x[0],y[0],m);
outtextxy(10,10,"After clipping");
outtextxy(10,470,"Press any key....");
rectangle(rx1,ry1,rx2,ry2);
for(i=0;i<j-1;i++)
line(x1[i],y111[i],x1[i+1],y111[i+1]);
printf("%d %d %d %d",x1[i],y111[i],x1[i+1],y111[i+1]);
getch();
return 0;
}

/*void clip(float e,float f,float m)
{
while(x[i]<rx1 || x[i]>rx2 || y[i]<ry1 || y[i]>ry2)
{
if(e<rx1)
{
f+=m*(rx1-e);
e=rx1;
}
else if(e>rx2)
{
f+=m*(rx2-e);
e=rx1;
}
if(f<ry1)
{
e+=(ry1-f)/m;
f=ry1;
}
else if(f>ry2)
{
e+=(ry2-f)/m;
f=ry2;
}
x1[j]=e;
y111[j]=f;
j++;
}
}
*/
