#include <stdio.h>
#define SIZE 
char a[SIZE], b[SIZE];
void input(){
    printf("Enter string1: ");
    scanf("%s", &a);
    
    scanf("%s", &b);
}
int stringcmp(){
    int i = 0;
    while(a[i]!='\0' || b[i] != '\0')
    {
        if(a[i] != b[i]){
            if(a[i] > b[i]) return 1;
            else return 2;
        }
        i++;
    }
}
void output(int n){
    if(n == 1) printf("String %s is greater..\n", a);
    else printf("String %s is greater..\n", b);
}

int main(){
    int val;
    input();
    val = stringcmp();
    if(val == 1) output(1);
    else output(2);

    return 0;
}



 
