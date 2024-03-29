#include <string.h>
#include <stdio.h>

int sht_hash(char* key)
{
    // English alphabet characters are represented by the
    // numbers from 65 to 122
    // TODO: find out if 65 is the smallest representation of character from
    // any of the alphabets
    int smallestNumberChar = 65;
    int numOfLetters = 1;
    int lettersNumRepresentation = key[0] - 0;
    int keyLength = strlen(key);

    if (keyLength > 1)
    {
        numOfLetters = 2;
        lettersNumRepresentation += key[1] - 0;
    }
    if (keyLength > 2)
    {
        numOfLetters = 3;
        lettersNumRepresentation += key[2] - 0;
    }

    return lettersNumRepresentation - smallestNumberChar * numOfLetters;
}

char** sht_add(char* key, char* value, char** table)
{
    int newIndex = sht_hash(key);
    // TODO: if the new key is out of the array's size, double the size
    // TODO: add only if the key doesn't exist
    table[newIndex] = value;
    return table;
}

char* sht_get(char* key, char** table)
{
    int keyIndex = sht_hash(key);
    char* value = table[keyIndex];
    // TODO: find out how to handle non-existing keys
    return value;
}