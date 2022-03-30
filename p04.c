#include<stdio.h>
int input_array_size()
{
  int x;
  printf("enter the size of array\n");
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
        c=1;
        break;
      }
    }
  return c;
}
void input_array(int n, int a[n])
{
  printf("enter the values\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_of_composite_numbers(int n, int a[n])
{
  int c=0,sum=0;
  for(int i=0;i<n;i++)
  {
    if (is_composite(a[i])==1)
    {
      sum=sum+a[i];
    }
  }
  return sum;
}
void output(int sum)
{
  printf("%d is the sum of the numbers you entered\n",sum);
}
int main()
{
  int n ,sum;
  n = input_array_size();
  int a[n];
  input_array(n,a);
  sum = sum_of_composite_numbers(n,a);
  output(sum);
  return 0;
}
