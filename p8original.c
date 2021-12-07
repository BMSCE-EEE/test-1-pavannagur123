#include <stdio.h>
float input();
float my_sqrt(float n);
void output(float x,float sqrt_results);
int main()
{
  int n,sqrt_results;
  n=input();
  sqrt_results=my_sqrt( n);
  output(n,sqrt_results);
  return 0;
  
}
float input()
{
  float n;
  printf("enter the number");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
 float y=1,x=n;
 float e=0.000001;
 while(x-y>e)
 {
   x=(x+y)/2;
   y=n/x;
 }
 return x;
}
void output (float x,float sqrt_results)
{
  printf("the sqrt of %0.2f is %0.2f",x,sqrt_results);
}

