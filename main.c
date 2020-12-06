#include <stdio.h>

int main() {
  float a;
  float b;
  char x;
  float result;
  printf("Enter the operator:");
  scanf("%c",&x);
  printf("enter 1st number:");
  scanf("%f",&a);
  printf("enter 2nd number:");
  scanf("%f",&b);
  
 
 switch(x){
   case '+':
   result = a+b;
   printf("%f",result);
   break;
   
   case '-':
   result = a-b;
   printf("%f",result);
   break;
   
   case '*':
   result = a*b;
   printf("%f",result);
   break;
   
   case '/':
   result = a/b;
   printf("%f",result);
   break;
   
   default:
   printf("invalid operator!");
   
   
 }
  return 0;
}