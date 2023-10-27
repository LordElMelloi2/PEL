# PEL (Personal Essential Library)

Una colecci�n de librer�as para utilizar en proyectos personales. Las librer�as hasta este momento incluyen.
* pelmem: Librer�a que se utiliza para poder generar arreglos din�micos.
* pelisl: Librer�a para utilizar un arreglo de n�meros que es din�mico. (En este momento solo se puede a�adir elementos; crear o liberar toda la memoria del arreglo)

## Caracter�sticas planeadas

* Permitir remover elementos de los arreglos generados con la librer�a <pelisl>.

## Ejemplo

```c
#include <stdio.h>

#include "pelisl.h"

int main(){
    IntList lista;
    initIntList(&lista);
    addToIntList(&lista, 5);

    for(int i = 0; i < lista.count; i++){
        printf("%d\n", lista.values[i]);
    }
}
```

## Resultado de Ejemplo

```bash
5
```

## Licencia

[MIT](https://choosealicense.com/licenses/mit/)
