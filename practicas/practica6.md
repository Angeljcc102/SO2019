#Objetivo:
Investigar y practicar hilos.
+ Señales
+ Pipes
+ Memoria compartida (archivos mapeados a memoria)

# Herramientas
gcc
git

# Conceptos
+ Hilos
  ++ Proceso ligero 
  ++ Solo tiene un sack y el código y el heap lo comparte con el proceso principal.
  ++ Si el proceso principal termina, los hilos terminan.
  
+ Lock
  ++ Mecanismo de sincronización
  ++ Variable global que soporta dos operaciones:
    ++ lock, el primer hilo que hace lock se adueña del lock, el resto queda esperando.
    ++ unlock, el hilo dueño del lock lo libera.
  ++ Ayuda para resolver el problema de la sección crítica.
  
+ Semáforos:
  ++ Mecanismo de sincronización.
  ++ Variable global que tiene un valor inicial mayor o igual a cero. Soporta dos operaciones.
    ++ Wait/decrease. Si es mayor a 0 decrementa y continua, si es igual a 0 se suspende.
    ++ Post/increase. Incrementa el valor del semaforo en uno.
  ++ Para asignar recursos.
+ Problemas de sincronización:
  ++ Condición de carrera. Ocurre cuando el resultado depende del orden en que se ejecutan los hilos.
  ++ Deadlock : Cuando dos o mas hilos estan esperando por un recurso que no se libera.
  ++ Productor / Consumidor : Ocurre cuando los datos se pueden sobreescribir.

# Url del commit:
https://github.com/Angeljcc102/SO2019/commit/6ea1c5d24e8af172fb86aca32edf3c9193de4d2d

# Que aprendí
Aprendí sobre como se utilizan los semáforos, que son los hilos, como hacer filosofos y que estos coman y descansen y ver este proceso de como utilizan los forks, como evitar que se hagan deadlocks.
