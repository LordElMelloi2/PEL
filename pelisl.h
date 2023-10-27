#ifndef pel_int_list_h
#define pel_int_list_h

#include "common.h"

typedef struct{
    int count;
    int capacity;
    int* values;
} IntList;

void initIntList(IntList* list);
void freeIntList(IntList* list);
void addToIntList(IntList* list, int number);

#endif // pel_int_list
