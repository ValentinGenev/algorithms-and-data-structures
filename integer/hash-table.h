int* iht_create();
int* iht_add(char* key, int value, int* table);
int iht_get(char* key, int* table);
void iht_destroy(int table);