

#include<stdio.h>
#include<string.h>
void input(char *string, char *substring)
{
  printf("enter the string\n");
  scanf("%s",string);
  printf("enter the substring\n");
  scanf("%s",substring);
}
int str_substr(char *string,char *substring)
{
  int i,count=0;
  int n=strlen(string);
  int m=strlen(substring); 
  for (i=0;i<n;i++)
    {
      for (int j=0;j<m;j++)
        {
          if(string[i+j]==substring[j])
          {
            count = count+1;
          }
          else
          {
            count = 0;
          }
        }
      if(count == m)
      {
        return i;
      }
    }
}
void output(char *string,char *substring,int index)
{
  printf("%d",index);
}
int main()
{
  int index;
  char a[25],b[25];
  input(a,b);
  index = str_substr(a,b);
  output(a,b,index);
}