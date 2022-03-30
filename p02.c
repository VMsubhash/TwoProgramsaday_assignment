#include<stdio.h>
int input_side()
{
  int x;
  printf("enter the side:\n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a, int b, int c)
{
  int isscalene;
  if(a==b || b==c || a==c)
  {
   isscalene = 0;

  }
  else 
  {
    isscalene = 1;
  }
  return isscalene;
}
void output(int a, int b, int c, int isscalene)
{
  if (isscalene == 1)
  {
    printf("the triangle with the given sides is scalene\n");
  }
  else
  {
    printf("the triangle with the given sides is not scalene\n");
  }
  
}

int main()
{
  printf("This program is to check if a triangle is scalene\n");
  int a,b,c,isscalene;
  a= input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a, b, c);
  output(a,b,c,isscalene);
  return 0;
}