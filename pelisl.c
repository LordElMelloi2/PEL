#include "pelisl.h"
#include "pelmem.h"

void initIntList(IntList* list){
    list->count = 0;
    list->capacity = 0;
    list->values = NULL;
}

void freeIntList(IntList* list){
    FREE_ARRAY(int, list->values, list->capacity);
    initIntList(list);
}

void addToIntList(IntList* list, int number){
    if(list->capacity < list->count + 1){
        /*Manejar arreglo de manera dinamica*/
        int oldCapacity = list->capacity;
        list->capacity = GROW_CAPACITY(list->capacity);
        list->values = GROW_ARRAY(int, list->values, oldCapacity, list->capacity);
    }

    list->values[list->count] = number;
    list->count++;
}
