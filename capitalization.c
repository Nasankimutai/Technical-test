#include <stdio.h>
#include <ctype.h>
//Write a program that accepts a string as input,capitalizes the first letter of each word in the string and then returns the result string.
 int main(){
     char inputString[100];
     printf("Enter a string: ");
     fgets(inputString, sizeof(inputString), stdin);

     int i = 0;
     int capitalizeNext = 1;

     while (inputString[i] != '\0'){
           if (isalpha(inputString[i])){
              if (capitalizeNext) {
                 inputString [i] = toupper(inputString [i]);
                 capitalizeNext = 0;
              }
           }
           else {
                capitalizeNext = 1;
           } i++;
      }
       printf("Modified string: %s\n", inputString);
      return 0;
}
               
