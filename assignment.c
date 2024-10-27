//program on assignment operator

#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    printf("Initial values: a = %d, b = %d\n", a, b);

    // Simple assignment
    a = b;
    printf("After a = b, a = %d\n", a);

    // Addition assignment
    a += b;  // equivalent to a = a + b
    printf("After a += b, a = %d\n", a);

    // Subtraction assignment
    a -= b;  // equivalent to a = a - b
    printf("After a -= b, a = %d\n", a);

    // Multiplication assignment
    a *= b;  // equivalent to a = a * b
    printf("After a *= b, a = %d\n", a);

    // Division assignment
    a /= b;  // equivalent to a = a / b
    printf("After a /= b, a = %d\n", a);

    // Modulus assignment
    a %= b;  // equivalent to a = a % b
    printf("After a %= b, a = %d\n", a);

    return 0;
}
