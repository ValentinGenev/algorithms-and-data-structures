#include <string.h>
#include <stdlib.h>
#include <stdio.h> // FIXME: remove me later

#define INT_SIZE 4
#define SMALLEST_UF_CHAR 65
#define BIGGEST_UTF_CHAR 122
#define INITIAL_CAPACITY (BIGGEST_UTF_CHAR - SMALLEST_UF_CHAR)

int iht_hash(char* key)
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

    printf("---------- hash: %d\n", lettersNumRepresentation - smallestNumberChar * numOfLetters);

    return lettersNumRepresentation - smallestNumberChar * numOfLetters;
}

int* iht_create()
{
    printf("--------- %d\n", INITIAL_CAPACITY);
    int* table = calloc(INITIAL_CAPACITY, INITIAL_CAPACITY * INT_SIZE);
    return table;
}

int* iht_add(char* key, int value, int* table)
{
    int newIndex = iht_hash(key);
    // TODO: if the new key is out of the array's size, double the size
    // TODO: add only if the key doesn't exist
    table[newIndex] = value;
    return table;
}

int iht_get(char* key, int* table)
{
    int value = table[iht_hash(key)];
    // TODO: find out how to handle non-existing keys
    return value;
}

void iht_destroy(int *table)
{
}