#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool IsIsogram(char *str)
{
    char newString[strlen(str)];

    // convert string to fully lowercase
    for(int i = 0; str[i]; i++)
        newString[i] = tolower(str[i]);

    // for loop for comparison of chars, i increments while j decrements
    for(int i = 0; i < strlen(str); i++)
    {
        for(int j = strlen(str); j > 0; j--)
        {
            // compares characters and returns 0 if a dupe is found
            if(newString[i] == str[j] && i != j)
                return 0;
        }
    }

    // return 1 if no dupes are found
    return 1;
}


// driver function for testing
int main(void)
{
    if(IsIsogram("moe"))
        printf("Jews!");
    return 0;
}