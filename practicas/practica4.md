## Objetivo

Hacer un planificador de procesos basados en prioridades.
El proceso con mayor prioridad se ejecuta primero.
Si hay dos o mas con prioridades iguales el primero de la lista.

## Herramientas

git
make
gcc

## Conceptos

1) Proceso
2) Planificación de procesos:
+ Es el mecanismo que el SO tiene para asignarle el cpu a un proceso.

3) Estados de un proceso

+ Es el mecanismo que el SO tiene para asignarle el cpu a un proceso.

3) Estados de un proceso.
4) Cambio de contexto:
+ Ocurre cuando el cpu deja de ejecutar un proceso para ejecutar otro
+ Guarda el PC y la dirección del stack del proceso actual.
+ Restaurar el PC y la dirección del nuevo proceso.


## Que aprendí:
En esta práctica aprendi como crear un planificador de procesos para hacer un scheduler, en donde se coloco dos nuevas funciones para ver la prioridad de los procesos que se estan corriendo.
Aprendí que es un planificador de procesos, que es el scheduler, como crear funciones en el kernel, acceder a la tabla de los procesos para buscar nuestro proceso y ejecutarlo.

## Url del commit:
https://github.com/Angeljcc102/SO2019/commit/5224d8f95b9ab46e114ca3118984eecf2f747e69

## Como se relaciona con los conceptos anteriores.
LLamadas a sistema, procesos.
