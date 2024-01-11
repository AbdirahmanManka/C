// swicth case in c
#include<stdio.h>
int main() {
    int a = 9;
    int b = 4;
    switch (a > b) {
        case 1:
            printf("a is greater than b\n");
            break;
        case 0:
            printf("a is less than or equal to b\n");
            break;
    }
    return 0;
}