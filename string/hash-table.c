#include <string.h>
#include <stdio.h>

int hashFunction(char* key)
{
    // TODO: maybe I need at least one more component to the formula
    int numOfLetters = 1;
    int lettersNumRepresentation = key[0] - 0;
    int keyLength = strlen(key);

    if (keyLength > 1) {
        numOfLetters = 2;
        lettersNumRepresentation += key[1] - 0;
    }
    if (keyLength > 2) {
        numOfLetters = 3;
        lettersNumRepresentation += key[2] - 0;
    }

    // English alphabet characters are represented by the
    // numbers from 65 to 122
    return lettersNumRepresentation - 65 * numOfLetters;
}

char** add(char* key, char* value, char* hashTable[])
{
    // TODO: find out how to make an array bigger if needed
    // maybe by copying the old one to new location in the memory and
    // deleting the old one
    // TODO: add only if the key doesn't exist
    hashTable[hashFunction(key)] = value;
    return hashTable;
}

char* get(char* key, char* hashTable[])
{
    int keyIndex = hashFunction(key);
    char* value = hashTable[keyIndex];
    // TODO: find out how to handle non-existing keys
    return hashTable[keyIndex];
}