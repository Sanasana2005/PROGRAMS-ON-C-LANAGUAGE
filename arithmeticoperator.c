//program of arithmetic operator

#include<stdio.h>
int main(){
    int a=10,b=100,sum,sub,mul,div,mod;
    printf("a=%d\n",a); //assign a=10
    printf("b=%d\n",b); //assign b=100

    sum=a+b;
    printf("sum is=%d\n",sum); //add two no
    
    sub=b-a;
    printf("subtraction is=%d\n",sub); //subtract two no

    mul=a*b;
    printf("multiplication is=%d\n",mul); //multiply two no

    div=b/a;
    printf("divsion is=%d\n",div); //divide and give quotient

    mod=a%b;
    printf("modulus is=%d\n",mod); //give remainder

    return 0;


}