# PEL (Personal Essential Library)

Una colección de librerias para utilizar en proyectos personales. Las librerias hasta este momento incluyen.
* pelmem: Libreria que se utiliza para poder generar arreglos dinamicos.
* pelisl: Libreria para utilizar un arreglo de numeros que es dinamico. (En este momento solo se puede añadir elmentos; crear o liberar toda la memoria del arreglo)

## Caracteristicas planeadas

* Permitir remover elementos de los arreglos generados con la libreria <pelisl>.

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
