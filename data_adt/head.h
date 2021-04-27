#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct data Data;

Data *verify_data();

void store_data();

void sum();

Data* criar_data();

Data *libera_data(Data* li);

// void print_data(Data *li);

// void preencher_data(Data* li, int d, int m, int a);

Data *print_data();

Data *preencher_data(int d, int m, int a);