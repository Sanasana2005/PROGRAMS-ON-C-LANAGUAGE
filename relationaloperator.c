//program of relational operator

#include<stdio.h>
int main(){
    int a=5,b=10,c=5,gre,sma,greq,smeq,com,noteq;
    printf("a=%d\n",a); //assign a=5
    printf("b=%d\n",b); //assign b=10
    printf("c=%d\n",c); //assign c=5
    


    gre=b>a;
    printf("greater no is=%d\n",gre); //results 1
    
    sma=a<b;
    printf("smaller no is=%d\n",sma); //results 1

    greq=a>=b;
    printf("greater than equal is=%d\n",greq); //results 0

    smeq=b<=a;
    printf("greater than equal is=%d\n",smeq); //results 0

    com=a==c;
    printf("comparison is=%d\n",com); //results 1

    noteq=a!=b;
    printf("not eqal to os=%d\n",noteq); //results 1

    return 0;


}