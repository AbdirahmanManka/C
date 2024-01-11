//if else statements in c
#include<stdio.h>
int main() {
    int a = 9;
    int b = 40;
    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("a is less than or equal to b\n");
    }
    //else if statements in c
    if (a > b) {
        printf("a is greater than b\n");
    } else if (a < b) {
        printf("a is less than b\n");
    } else {
        printf("a is equal to b\n");
    }
    return 0;
}