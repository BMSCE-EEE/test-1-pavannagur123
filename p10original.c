#include <stdio.h>
void input(int *a,int *b ,int *c,int *d);
void x(int *a,int *b ,int *c,int *d,int *imag,int *real);
void output(int *imag,int *real);
int main()
{
    int a,b,c,d,imag,real;
    input (&a,&b,&c,&d);
    x (&a,&b,&c,&d,&imag,&real);
    output(&imag,&real);
    return 0;
}
void input(int *a,int *b ,int *c,int *d)
{
  scanf("%d %d",a,b);
  scanf("%d %d",c,d);
}
void x(int *a,int *b ,int *c,int *d,int *imag,int *real)
{
  *imag=*b+*d;
  *real=*a+*c;

} 
void output(int *imag,int *real)
{
  printf("the sum is %d + %d i  ",*real,*imag);
}


