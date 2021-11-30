#include<stdio.h>
void input(int *a,int *b);
void add(int *a,int *b,int *sum);
void output(int *sum);
int main()
{
 int a,b,sum;
 input(&a,&b);
 
 add(&a,&b,&sum);
 output(&sum);
 return 0;


}
void input(int *a,int *b)
{
  scanf("%d",a);
  scanf("%d",b);
}
void add(int *a,int *b,int *sum)
{
  *sum=*a+*b;
}
void output(int *sum)
{
  printf("the sum is %d",*sum);
}