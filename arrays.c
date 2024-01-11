//arrays in c
#include<stdio.h>
int main() {
    int marks[4];
    int mynums[3] = {1, 2, 3};
    marks[0] = 34;
    marks[1] = 45;
    marks[2] = 67;
    marks[3] = 87;
    //print the marks
    for (int i = 0; i < 4; i++)
    {
        printf("The value of marks %d is %d\n", i, marks[i]);
    }
    return 0;

}