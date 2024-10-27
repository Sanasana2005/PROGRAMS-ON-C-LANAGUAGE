//program of bitwise operator

#include <stdio.h>
int main(){
    unsigned int a=5,b=3;

    unsigned int andres=a&b; //result:000000011
    printf("bitwise and:%u & %u=%u\n",a,b,andres);

    unsigned int orres=a|b; //result:000000111
    printf("bitwise or:%u | %u=%u\n",a,b,orres);

    unsigned int xorres=a^b; //result:000000010
    printf("bitwise xor:%u ^ %u=%u\n",a,b,xorres);

    unsigned int notres=~a; //result:11111010
    printf("bitwise not:~%u=%u\n",a,notres);

    unsigned int leftshiftres=a<<1; //result:00001010
    printf("left shift:%u<<1=%u\n",a,leftshiftres);

    unsigned int rightshiftres=a>>1; //result:00000010
    printf("right shift:%u>>1=%u\n",a,rightshiftres);

    return 0;
}