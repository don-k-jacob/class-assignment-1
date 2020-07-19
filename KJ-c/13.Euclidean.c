#include <stdio.h>
struct Euclidean
{
int x;
int y;
};
int main()
{
struct Euclidean p1,p2,p3;
  printf("Enter the first point in the format (x1,y1) "); 
  scanf("%d %d",&p1.x,&p1.y);
  printf("Enter the second point in the format (x2,y2)"); 
  scanf("%d %d",&p2.x,&p2.y);
  p3.x=p1.x+p2.x;
  p3.y=p1.y+p2.y;
  printf("new point after addition\n");
  printf("%d %d\n",p3.x,p3.y);
}