#include <stdio.h>
int main()
{
  char ch[150];
  int i, alpha, digit, vowel, consonant, space, splchar;
  alpha = digit = vowel = consonant = space = splchar = 0;

  printf("Enter a string: ");
  fgets(ch, sizeof(ch), stdin);

  for (i = 0; ch[i] != '\0'; ++i) 
  {    
    if(ch[i] >= 'a' && ch[i] <= 'z' ||  ch[i] >= 'A' && ch[i] <= 'Z' )
	{
        alpha++;
        if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
             vowel++;
        else
            consonant++;
    }
    else if (ch[i] >= '0' && ch[i] <= '9')
        digit++;
    else if (ch[i] == ' ')
      space++;
    else
      splchar++;
  }
  
  printf("Alphabets: %d\n", alpha);
  printf("Vowels: %d\n", vowel);
  printf("Consonants: %d\n", consonant);
  printf("Digits: %d \n", digit);
  printf("White spaces: %d\n", space);
  printf("Special Character: %d\n", splchar);

  return 0;
}


