#include<stdio.h>
void input(int *a,int *b,int *c );
void output(int *largest);
void larg(int *a,int *b,int *c,int *largest);
int main()
{
  int a,b,c,largest;
  input (&a,&b,&c);
  larg(&a,&b,&c,&largest);
  output(&largest);
  
  return 0;
  

}
void input(int *a,int *b,int *c )
{
  scanf("%d",a);
  scanf("%d",b);
  scanf("%d",c);

}
void larg(int *a,int *b,int *c,int *largest)
{
if(*a>*b && *a>*c)
  *largest=*a;

  if (*b>*c && *b>*a)
  *largest=*b;
  else
  *largest=*c;
  
}
void output(int *largest)
{
  printf("the largest number is %d",*largest);
}