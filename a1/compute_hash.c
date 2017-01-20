#include <stdio.h>
#include <stdlib.h>


// Hash manipulation functions in hash_functions.c
void hash(char *hash_val, long block_size);
void check_hash(const char *hash1, const char *hash2, long block_size);


#ifndef MAX_BLOCK_SIZE
    #define MAX_BLOCK_SIZE 1024
#endif


int main(int argc, char **argv) {
    char hash_val[MAX_BLOCK_SIZE];

    printf("Received %d command line arguments.\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    return 0;
}

