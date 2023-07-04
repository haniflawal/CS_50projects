#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int decimal(string text);

int ascii [127];

int binary [BITS_IN_BYTE]; //, flip [BITS_IN_BYTE]

int main(void)
{
    string text = get_string("Message: ");
    // int finale [strlen(text)][BITS_IN_BYTE]; // [BITS_IN_BYTE * strlen(text)];
    for (int a = 0; a < strlen(text); a++)
    {
        ascii[a] = (int)text[a];
        // printf("%i\n", ascii[a]);
        for (int b = 0; b < BITS_IN_BYTE; b++)
        {
            binary[b] = ascii[a]%2;
            ascii[a] /=2;
            // printf("%i", binary [b]);
        }

        for (int c = BITS_IN_BYTE -1; c > -1; c--)
        {
           if (c%8 == 0 && c>0){
                    printf ("\n");
            }
             print_bulb(binary[c]);
        }


            // printf ("%i", binary[b]);
        //     }
        // for(int i = 0; i<4; i++){
        //     int t = binary[i];
        //     binary[i] = binary[7-i];
        //     binary[7-i] = t;
            // finale[a*BITS_IN_BYTE + i] = binary[i];
            // printf ("%i", binary[i]);
        //   for (int i = 0; i < strlen(text); i++){
        //     for (int j = 0; j < BITS_IN_BYTE; j++){
        //         finale[i][j] = binary[i];
        //         printf("%i",finale[i][j]);
        //     }
        // }



    // for (int i = 0; i< strlen(text); i++){
    //     for (int j = 0; j < BITS_IN_BYTE; j++){

    //         if (j%8 == 0){
    //             printf ("\n");
    //         }
    //         print_bulb(finale[i][j]);
    //     }
    //     }
    //     printf("\n");

    printf("\n");

}
}


void print_bulb(int bit)

{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}






