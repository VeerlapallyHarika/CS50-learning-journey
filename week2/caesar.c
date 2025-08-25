#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    int key = atoi(argv[1]);

    printf("Valid key entered: %d\n", key);

    string plaintext = get_string("Enter the Plaintext:");
    int n = strlen(plaintext);
    printf("ciphertext:");

    for (int i = 0; i < n; i++)
    {
        char c = plaintext[i];
        if (isalpha(c))
        {
            if (isupper(c))
            {
                c = ((plaintext[i] - 'A' + key) % 26) + 'A';
            }
            else if (islower(c))
            {
                c = ((plaintext[i] - 'a' + key) % 26) + 'a';
            }
        }
        printf("%c", c);
    }

    printf("\n");
    return 0;
}
