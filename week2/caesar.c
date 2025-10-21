#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char rotate(char c,int n);
int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if(argc!=2){
        printf("Usage: ./ceasar key\n");
        return 1;
    }
    // Make sure every character in argv[1] is a digit
    // Convert argv[1] from a `string` to an `int`
    string key = argv[1];
    for(int i = 0;argv[1][i]!='\0';i++){
        if(!(isdigit(argv[1][i]))){
        printf("Usage: ./ceasar key\n");
        return 1;
    }
    }
    int k = atoi(key);

    // Prompt user for plaintext
    string plaintext = get_string("plaintext: ");
    // For each character in the plaintext:
    for(int i = 0;plaintext[i] != '\0';i++){
        plaintext[i] = rotate(plaintext[i],k);

    }
    printf("ciphertext: %s\n",plaintext);   // Rotate the character if it's a letter
}