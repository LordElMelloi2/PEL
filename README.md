# PEL (Personal Essential Library)

Una colección de librerías para utilizar en proyectos personales. Las librerías hasta este momento incluyen.
* pelmem: Librería que se utiliza para poder generar arreglos dinámicos.
* pelisl: Librería para utilizar un arreglo de números que es dinámico. (En este momento solo se puede añadir elementos; crear o liberar toda la memoria del arreglo)

## Características planeadas

* Permitir remover elementos de los arreglos generados con la librería <pelisl>.

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
