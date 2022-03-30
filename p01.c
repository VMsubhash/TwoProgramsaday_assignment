#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the lengths in the format base height\n");
  scanf("%f %f",base,height);
}
void find_area(float base, float height, float *area)
{
  *area = 0.5 * base * height;
}
void output(float base, float height, float area)
{
  printf("the area of the triangle with base %f and height %f is %f\n",base,height,area);
}
int main()
{
  float b,h,ar;
  input(&b,&h);
  find_area(b,h,&ar);
  output(b,h,ar);
  return 0;
}