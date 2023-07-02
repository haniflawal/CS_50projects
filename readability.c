#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);

int count_words(string words);

int count_sentences(string phrases);

int main(void)
{
    const string a = get_string("Text: ");
    // printf("%s \n", a);
    double letter_score = count_letters(a);
    //printf("%f \n", letter_score);

    double word_score = count_words(a);
    //printf("%f \n", word_score);
    double sentence_score = count_sentences(a);
    //printf("%f \n", sentence_score);

    double l = ((letter_score/word_score)*100);
    //printf("%f \n", l);

    double s = ((sentence_score/word_score)*100);
    // printf("%f \n", s);
    double index = ((0.0588 *l) - (0.296 *s) - 15.8);

    int grade_level = (int) round(index);

if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade_level);
    }
}

int count_letters(string text)
{
    int a = 0;
    int count = 0;
    while (a < strlen(text))
    {
        if ((isupper(text[a]) != 0) || (islower(text[a]) !=0))
        {
        count++;
        a++;
        }
        else
        {
            count+=0;
            a++;
        }
    }
    return count;
}

int count_words(string words)
{
    int b = 0;
    int counter = 1;
    while (b < strlen(words))
    {
        if (words[b] == 32)
        {
            b++;
            counter++;
        }
         else
        {
            counter+=0;
            b++;
        }
    }
    return counter;
}

int count_sentences(string phrases)
{
    int c = 0;
    int counts = 0;
    while (c < strlen(phrases))
    {
        if ((phrases[c] == 46) || (phrases[c] == 33) || (phrases[c] == 63))
        {
            c++;
            counts++;
        }
         else
        {
            counts+=0;
            c++;
        }
    }
    return counts;
}

//he at a apple