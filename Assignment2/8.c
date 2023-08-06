
#include <stdio.h>
#include <ctype.h>

int main() {
  char str[1000];
  int vowels = 0, consonants = 0;

  printf("Enter a paragraph: ");
  gets(str);

  for (int i = 0; str[i]; i++) {
    if (isalpha(str[i])) {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
          str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
        vowels++;
      } else {
        consonants++;
      }
    }
  }

  printf("Number of vowels: %d\n", vowels);
  printf("Number of consonants: %d\n", consonants);

  return 0;
}
