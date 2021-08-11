//check point in circle

#include<stdio.h>
int main()
{
 int x,y,r,D;
 printf("\n enter the radius of circle");
 scanf("%d",&r);
 
 printf("enter the co-ordinates of point");
 scanf("%d%d",&x,&y);
 D= x*x + y*y;
 
 if(D*D == r*r)
 {
  printf("point(%d,%d)is lies on the circle",x,y);
  }
 else  if(D*D < r*r)
  {
  printf("point(%d,%d) is lies inside the circle");
 }
 
 else if (D*D > r*r)
 {
 printf("point (%d,%d) is lied outside the circle"):
 }
 else if (D*D =0)
 {
 printf("point(%d,%d) is origin);
 }
 return 0;
 }
