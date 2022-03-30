
#include<stdio.h>
#include<math.h>
typedef struct _point
{
  float x,y;
} Point;
typedef struct _line
{
  Point p1,p2;
  float distance;
} Line;
Point input_point()
{
  Point p;
  printf("enter the point of the form x y\n");
  scanf("%f %f",&p.x,&p.y);
  return p;
}
Line input_line()
{
  Line l;
  l.p1=input_point();
  l.p2=input_point();
  return l;
}
void find_length(Line *l)
{
  l->distance = sqrt(pow((l->p1.x-l->p2.x),2)+pow((l->p1.y-l->p2.y),2));
}
void output(Line l)
{
  printf("the distance of the line with co-ordinates(%f,%f)and (%f,%f) is %f",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}
int main()
{
  Line l;
  l = input_line();
  find_length(&l);
  output(l);
}