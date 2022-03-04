#include <stdio.h>
int main() {

  char ch[150];
  int i, alpha_count, digit_count, vowel_count, consonant_count, space_count,splchar_count;

  // initialize all variables to 0
  alpha_count = digit_count = vowel_count = consonant_count = space_count = splchar_count = 0;

  // Get  string input
  printf("Enter a string: ");
  fgets(ch, sizeof(ch), stdin);     // you can also use --->  gets(ch);

  // loop through each character of the string
  for (int i = 0; ch[i] != '\0'; ++i) 
  {
      
    if( ch[i] >= 'a' && ch[i] <= 'z' ||  ch[i] >= 'A' && ch[i] <= 'Z' ){
        alpha_count ++;
    

        // check if the character is a vowel
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' ||
            ch[i] == 'o' || ch[i] == 'u') 
    
          // increment value of vowels by 1
             vowel_count++;
        else
          // increment value of consonant by 1
            consonant_count++;
    }
    else if (ch[i] >= '0' && ch[i] <= '9') 
    {
        // check if the character is a digit
        digit_count++;
    }
    else if (ch[i] == ' ') 
    {
       // check if the character is an empty space
      space_count++;
    }
    else
    {
      splchar_count++;
    }
    
  }
  
  printf("Alphabets: %d ", alpha_count);
  printf("\nVowels: %d ", vowel_count);
  printf("\nConsonants: %d ", consonant_count);
  printf("\nDigits: %d ", digit_count);
  printf("\nWhite spaces: %d ", space_count);
  printf("\nSpecial Character: %d\n ", splchar_count);

  return 0;
}


