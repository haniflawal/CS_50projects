#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool only_alpha(string word);

string encrypt(string cipher, string key);

int main(int argc, string argv[])
{
    if (argc != 2 || only_alpha(argv[1]) == false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if ((only_alpha(argv[1]) == true) && (strlen(argv[1]) != 26))
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    else
    {
        string message = get_string("plaintext: ");
        string key = (argv[1]);
        string ciphertext = encrypt(message, key);
        printf("ciphertext: %s\n", ciphertext);
        return 0;
    }

}

bool only_alpha(string word)
{
    for (int i = 0; i < strlen(word); i++)
    {
        for (int k = i+1; k < strlen(word); k++)
        {
            if (word[k] == word[i])
            {
                return false;
            }
        }
        if (isalpha(word[i]) == 0)
        {
            return false;
        }
    }
    return true;
}

string encrypt(string cipher, string key)
{
    for (int j = 0; j < strlen(cipher); j++)
    {
      if (isupper(cipher[j]) != 0)
      {
        int num = (cipher[j] % 65);
        cipher[j] = toupper(key[num]);
        }
        else if (islower(cipher[j]) != 0)
        {
          int num = (cipher[j] % 97);
          cipher[j] = tolower(key[num]);
          }
          else
          {
            continue;
          }
    }
    return cipher;
}

//           return cipher;

//                  string message = get_string("plaintext: ");
//         int key = atoi(argv[1]);
//         for (int i = 0; i < strlen(message); i++)
//         {
//             message[i] = encrypt(message[i], key);
//             }
//             printf("ciphertext: %s\n", message);
//             return 0;
// }