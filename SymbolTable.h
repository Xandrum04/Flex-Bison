#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

void set_symbol(const char *name, int value);
int get_symbol(const char *name);
void free_symbol_table();

#endif
