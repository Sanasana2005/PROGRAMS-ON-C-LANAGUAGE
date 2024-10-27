//program of unary operation

#include <stdio.h>
int main(){
    int a=10,b=20;
    printf("a is=%d\n",a); //assign a=10
    printf("b is=%d\n",b); //assign b=20

    printf("pre-incrementing a=%d\n",++a); //a=a+1
    printf("post-incrementing b=%d\n",b++); //b=20

    printf("pre-decrementing a=%d\n",--a); //a=a-1
    printf("post-decrementing b=%d\n",b--); //b=21

    return 0;
    
    

}