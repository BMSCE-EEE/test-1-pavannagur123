#include<stdio.h>
int input();
int sum(int n);
void output(int add);
int main()
{
  int n,add;
  n=input();
  add=sum(n);
  output(add);
  return 0;
}
int input()
{
  int n;
  printf("enter the number ");
  scanf("%d",&n);
  return n;
}
int sum(int n)
{
  int i,sum=0;
  for (i=0;i<n+1;i++)
     sum=sum+i;
  return sum;
}
void output(int add)
{
  printf("the answers is %d",add);
}
