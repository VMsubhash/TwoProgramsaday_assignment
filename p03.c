#include<stdio.h>
int input_number()
{
  int x;
  printf("enter a number\n");
  scanf("%d",&x);
  return x;
}
int is_composite(int n)
{
  int i,c=0;
  for (i=2;i<n;i++)
    {
      if (n%i==0)
      {
        c=c+1;
        break;
      }
    }
  return c;
}
void output(int n, int composite)
{
  if (composite==1)
  {
    printf("%d is a composite number\n",n);
  }
  else
  {
    printf("%d is a prime number\n",n);
  }
}
int main()
{
  int n,c;
  n = input_number();
  c = is_composite(n);
  output(n,c);
  return 0;
}