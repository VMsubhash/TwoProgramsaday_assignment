#include<stdio.h>
void input_string(char *a)
{
  printf("enter the string you want to reverse\n");
  scanf("%s",a);
}
char *str_reverse(char *a)
{
  char *last = a;

    while ( *last ) ++last;

    if ( a != last )
    {
        for ( char *first = a; first < --last; ++first )
        {
            char c = *first;
            *first = *last;
            *last = c;
        }
    }

    return a;
}
void output(char *a,char *reversea)
{
  printf("the rverse of %s is %s\n",a,reversea);
}
int main()
{
  char b[1000] = { '\0' };
  
  input_string(b);
  char reverse[1000] ;
  output(b, reverse );
  //output(b,reverse);
  return 0;
}
