#include <stdio.h>
#include <ctype.h>
//Write a program that counts the number of vowels in a sentence 
int main() {
	    char sentence[1000];
	        int vowels = 0;
		    printf("Enter a sentence: "); 
		        fgets(sentence, sizeof(sentence), stdin); 

			    for (int i = 0; sentence[i] != '\0'; ++i) {
				            char ch = tolower(sentence[i]); 
					            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
							                ++vowels;
									        }
						        }
			        printf("Number of vowels in the sentence is: %d\n", vowels);
				    return 0;
}


