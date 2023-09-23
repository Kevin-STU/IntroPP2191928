# Primer Taller - OpenMP (Fibonacci)

En esta carpeta se encuentran los archivos relacionados con la solución secuencial y paralela del problema de suma de números de Fibonacci utilizando OpenMP.

## Contenido de la Carpeta

- `sumfibonacci.c`: Código fuente de la solución secuencial en C para calcular la suma de números de Fibonacci en índices pares.
- `sumfibonacci_omp.c`: Código fuente de la solución paralela en C utilizando OpenMP para calcular la suma de números de Fibonacci en índices pares.
- `sumfibo`: Ejecutable generado a partir de `sumfibonacci.c`.
- `sumfibo_omp`: Ejecutable generado a partir de `sumfibonacci_omp.c`.

## Descripción del Problema

En matemáticas, la sucesión de Fibonacci es una secuencia infinita de números naturales. Cada término de la secuencia es la suma de los dos términos anteriores. Para este ejemplo, hemos implementado un programa en C para encontrar la suma de números de Fibonacci en índices pares hasta un valor N. Esto se hace tanto de manera secuencial como paralela utilizando OpenMP.

## Instrucciones de Compilación y Ejecución

### Descarga de archivos

Para obtener los archivos de este repositorio en el servidor GUANE o localmente, se puede utilizar las siguientes opciones:

- Utiliza `wget` para descargar los archivos:
```bash wget https://github.com/Kevin-STU/IntroPP2191928.git```

- O clona el repositorio utilizando `git`:
```bash git clone https://github.com/Kevin-STU/IntroPP2191928.git```

### Compilación y Ejecución

Para compilar el código secuencial, se utiliza el siguiente comando:

```bash gcc -Wall -std=c99 sumfibonacci.c -o sumfibo```

Donde:
- `-Wall`: Habilita todas las advertencias para una compilación más segura.
- `-std=c99`: Indica el estándar C99.
- `sumfibonacci.c`: El código fuente a compilar.
- `-o sumfibo`: El nombre del archivo ejecutable resultante.

Para ejecutar el programa secuencial, se usa el siguiente comando:

```bash ./sumfibo```

Para compilar el código paralelo, se utiliza el siguiente comando:

Donde:
- `-fopenmp`: Habilita la biblioteca OpenMP para la programación paralela.

Para ejecutar el programa paralelo, se usa el siguiente comando:
```bash ./sumfibo_omp```

## Explicación del código secuencial

## Explicación del código paralelizado

## Comparación de Tiempos de Ejecución




