#include<stdio.h>
int input();
int largest(int a ,int b,int c);
void output(int larg);
int main()
{
  int a, b, c,larg;
  a=input();
  b=input();
  c=input();
  larg=largest( a, b, c);
  output(larg);
  return 0;

}
int largest(int a ,int b,int c)
{
  
  if(a>=b && a>=c)
  return a;

  if (b>=c && b>=a)
  return b;
  else
  return c;
  

}
void output(int larg)
{
  printf("the largest number is %d",larg);
}
int input()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  return a;
}