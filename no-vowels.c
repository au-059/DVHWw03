// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string replace(string argument);

int main(int argc, string argv[]) // CLI command ex.: $./no-vowels Alua 059 (where: "./no-vowels" is argv[0], "Alua" - argv[1], "059" - argv[2], and argv[3] is 0)
{
    // ERROR: check for the number of command line arguments
    if (argc != 2)
    {
        printf("ERROR: please type an argument (not more than one can be accepted)\n");
        return 1; // Returns after the command: echo $?
    }
    else
    {
        printf("%s\n", replace(argv[1]));
        return 0; // Returns after the command: echo $?
    }
}

string replace(string argument)
{
    // Calculate string lengrh
    int length = strlen(argument);

    // Replace (using switch statement): a -> 6, e -> 3, i -> 1, o -> 0
    //(first, change uppercase to lowercase)

    char n;
    for (int i = 0; i < length; i++)
    {
        if (argument[i] == 'A' || argument[i] == 'E' || argument[i] == 'I' || argument[i] == 'O')
        {
            n = tolower(argument[i]);
        }
        else
        {
            n = argument[i];
        }
        switch (n)
        {
            case 'a':
                argument[i] = '6';
                break;

            case 'e':
                argument[i] = '3';
                break;

            case 'i':
                argument[i] = '1';
                break;

            case 'o':
                argument[i] = '0';
                break;

            default:
                argument[i] = argument[i];
                break;
        }
    }

    // RETURN converted word
    return argument;
}