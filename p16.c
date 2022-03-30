
#include<stdio.h>
#include<math.h>
typedef struct _point
{
float x,y;
}Point
typedef struct _line{
Point p1,p2;
float distance;
}Line
typedef struct _polygon
{
int n;
Line l[100];
float perimeter;
}Polygon
int input_n()
{
  int n;
  printf("enter the number of sides of the polygon");
  scanf("%d",n);
  return n;
}
void input_polygon(int n,Polygon *p)
{
  input_n_lines(n,p->l);
}
Line input_line()
{
  Line a;
  printf("enter the first point of the form x y\n");
  scanf("%f %f",&a.p1.x,&a.p1.y);
  printf("enter the second point of the form x y\n");
  scanf("%f %f",&a.p2.x,&a.p2.y);
  return a;
}
void input_n_lines(int n, Line l[n])
{
  for(int i=0;i<n;i++)
    {
      l[i]=input_line();    
    }
}
float find_perimeter(Polygon *p)
{
  float perimeter=0;
  int i;
  for (i=0;i<p->n;i++)
    {
      p->l[i].distance = sqrt(pow((p->l[i]->p1.x-p->l[i]->p2.x),2)+pow((l->p1.y-l->p2.y),2));
    }
}
int main()
{
  int n;
  float 
}