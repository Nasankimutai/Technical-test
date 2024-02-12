//Write a program that prints the numbers from 1 to 100. For of three print Fizz , for multiples of 5, print buzz and for numbers that are both multiples of both 3 and 5 print fizzbuzz
#include <stdio.h>

int main(){

  for(int i=1; i<=100; ++i){
     if(i%3==0 && i%5==0){
     printf("FizzBuzz");
     }
     else if (i%3==0){
     printf("Fizz");
     }
     else if (i%5==0){
     printf("Buzz");
     }
     else {
     printf("%d", i);
     }
  }
   return 0;
 };
     
     
