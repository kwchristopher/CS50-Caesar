#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Get key from user at command line
int main(int argc, string argv[])
{
    //Check if key is exactly one arguement long
    if (argc == 2)
    {
        //Convert key from an array value to integer
        string key = argv[1];
        int k = atoi(key);
        //Get plaintext from user
        string plain = get_string("plaintext: ");
        //Iterate over plaintext to produce cipher code
        printf("ciphertext: ");
        for (int strl = 0; strl < strlen(plain); strl++)
        {
            //Convert string to char to work on individual units
            char c = plain[strl];
            //Check to see if character is a member of the alphabet
            int alpha = c;
            if (isalpha(alpha))
            {
                //Check to see if character is uppercase
                if (isupper(alpha))
                {
                    int upper = c - 65;
                    int cipher = (upper + k) % 26;
                    char d = cipher + 65;
                    //Prints out uppercase letters
                    printf("%c", d);
                }
                //Check to see if character is lowercase
                else if (islower(alpha))
                {
                    int lower = c - 97;
                    int cipher = (lower + k) % 26;
                    char d = cipher + 97;
                    //prints out lowercase letters
                    printf("%c", d);
                }
            //Prints out all non-alphabetical characters
            }
            else
            {
                printf("%c", c);
            }
        //Prints new line at the end of ciphertext
        }
        printf("\n");
        return 0;
        }
    //Returns error if command line arguement is invalid
    else
    {
        printf("Invalid key.\n");
        return 1;
    }
}
