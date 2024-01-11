// constants in c
// constants are like variables except that their values cannot be changed after their definition.
// constants are useful for defining values that are used many times within a program.
#include<stdio.h>   
int main() {
    const int a = 9;
    const int b = 10;
    const int sum = a + b;
    printf("The sum is %d", sum);
    return 0;
}