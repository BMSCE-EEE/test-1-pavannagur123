#include <stdio.h>
float add (float a ,float b);
int input();
void output(float sum);


int main()
{
   float a,b,sum;
   a=input();
   b=input();
   sum=add(a,b);
   output(sum);
  

}
float add (float a ,float b)
{
    float add=a+b;
    return add;
}
int input()
{
    float a;
    printf("enter the number");
    scanf("%f",&a);
    return a;
}
void output(float sum)
{
   printf("the sum is %0.2f",sum);
}

