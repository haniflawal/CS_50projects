#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool only_digits(string word);

char rotate(char cipher, int key);

int main(int argc, string argv[])

{
  if (argc != 2 || only_digits (argv[1]) == false){
    printf("Usage: ./caesar key\n");
    return 1;
  } else
  {
    string message = get_string("plaintext: ");
    int key = atoi(argv[1]);
    for (int i = 0; i < strlen(message); i++)
    {
      message[i] = rotate(message[i], key);
    }
    printf("ciphertext: %s\n", message);
    return 0;
  }


}

bool only_digits(string word)

{
  for (int a = 0; a < strlen(word); a++)
  {
    if (isdigit (word[a]) == 0){
    return false;
    }
  }

  return true;

}

// char rotate(char cipher, int key);

// int main (void){
//  string v = get_string("cipher: ");
//  int j = 2;
//  char code = rotate(v[0], j);
//  printf("%c\n", code); }

char rotate(char cipher, int key)

{
    if (isalpha(cipher) != 0)
    {
  if (isupper(cipher) != 0)
  {
    cipher=(cipher % 65 + key) % 26 + 65;
    }
      else if (islower(cipher) != 0)
      {
        cipher=( cipher % 97 + key) % 26 + 97;
        }
      }
    return cipher;
}
