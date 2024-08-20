#include "SymbolTable.h"
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100  // Define the size of the hash table

// Definition of the Symbol structure
typedef struct Symbol {
    char *name;         // Symbol name
    int value;          // Symbol value
    struct Symbol *next; // Pointer to the next symbol in case of collisions
} Symbol;

// Static array of pointers to Symbol structures representing the hash table
static Symbol *symbol_table[TABLE_SIZE] = {0};

// Hash function to map a string to a table index
static unsigned int hash(const char *str) {
    unsigned int hash = 0;
    while (*str) {
        hash = (hash << 5) + *str++; // Compute hash value
    }
    return hash % TABLE_SIZE; // Return index within the bounds of TABLE_SIZE
}

// Function to set or update a symbol in the hash table
void set_symbol(const char *name, int value) {
    unsigned int index = hash(name);  // Get the index for the given name
    Symbol *entry = symbol_table[index]; // Get the list of symbols at that index
    
    // Traverse the list to see if the symbol already exists
    while (entry) {
        if (strcmp(entry->name, name) == 0) { // If symbol found, update its value
            entry->value = value;
            return;
        }
        entry = entry->next; // Move to the next symbol in the list
    }
    
    // If the symbol is not found, create a new one
    entry = malloc(sizeof(Symbol)); // Allocate memory for the new symbol
    entry->name = strdup(name);     // Duplicate the name string
    entry->value = value;           // Set the symbol's value
    entry->next = symbol_table[index]; // Insert the new symbol at the beginning of the list
    symbol_table[index] = entry;    // Update the table to point to the new symbol
}

// Function to get the value of a symbol by name
int get_symbol(const char *name) {
    unsigned int index = hash(name); // Get the index for the given name
    Symbol *entry = symbol_table[index]; // Get the list of symbols at that index
    
    // Traverse the list to find the symbol
    while (entry) {
        if (strcmp(entry->name, name) == 0) { // If symbol found, return its value
            return entry->value;
        }
        entry = entry->next; // Move to the next symbol in the list
    }
    
    // If the symbol is not found, return 0
    return 0; 
}

// Function to free all allocated memory in the symbol table
void free_symbol_table() {
    for (int i = 0; i < TABLE_SIZE; i++) { // Traverse each slot in the hash table
        Symbol *entry = symbol_table[i]; // Get the list of symbols at this slot
        
        // Traverse the list and free each symbol
        while (entry) {
            Symbol *prev = entry; // Keep track of the current symbol
            entry = entry->next; // Move to the next symbol
            free(prev->name); // Free the memory allocated for the symbol's name
            free(prev); // Free the memory allocated for the symbol itself
        }
    }
}
