#include <stdio.h>

//Write a program that takes an integer as input and returns an integer with reversed digit ordering 

 int reverseDigits(int num){
     int rev_num = 0;
     while (num > 0){
           rev_num = rev_num * 10 + num % 10;
           num = num/10;
     }
     return rev_num;
     }
 int main () {
     int num;
     printf("Enter an integer: ");
     scanf("%d", &num);
     int reversed = reverseDigits(num);

     printf("Reversed number: %d\n", reversed);
     return 0;
}
