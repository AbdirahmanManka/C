#include<stdio.h>
int main(){
  //C program to joke with my younger siblqings
  //the program takes inputs 
  //and gives a result
  int a,b,c;
  printf("Enter the first number: ");
  scanf("%d",&a);
  printf("Enter the second number: ");
  scanf("%d",&b);
  printf("Enter the third number: ");
  scanf("%d",&c);
  if(a==b && b==c){
    printf("All are equal\n");
  }
  else if(a==b || b==c || a==c){
    printf("Two are equal\n");
  }
  else{
    printf("All are different\n");
  } 
  return 0;
  
}