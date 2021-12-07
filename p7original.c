#include<stdio.h>
int input_array_size();
void input_array(int n,int a[n]);
int sum_n_array(int n,int a[n]);
void output(int add);
int main()
{
  int n,add;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  add=sum_n_array(n,a);
  output(add);
  return 0;
}
int input_array_size()
{
  int n;
  printf("number of elements are");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i;
  for (i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
}
int sum_n_array(int n,int a[n])
{
  int i,sum=0;
  
  for (i=0;i<n;i++)
    sum=sum+a[i];
    
  return sum;  
}
void output(int add)
{
  printf("the sum of the numbers is %d",add);
}

