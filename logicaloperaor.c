//program of logical operator

#include <stdio.h>
int main(){
    int a=5,b=10,c=15;
    if (a<b && b<c){
        printf("a is less than b and b is less than c\n"); //if both are true results in true
    } else{
        printf("condition for logical and is false\n");
    }

    if (a>b || b<c){
        printf("a is greater than b or b is less than c\n"); //if atleast one is true results in true
    } else{
        printf("condition for logical or is false\n");
    }

    if (!(a>b)){
        printf("a is not greater than b\n"); //negates the values
    } else{
        printf("condition for logical not is false\n");
    }
    
    return 0;

}