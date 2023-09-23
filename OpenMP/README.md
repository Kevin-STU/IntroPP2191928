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
```wget https://github.com/Kevin-STU/IntroPP2191928.git```

- O clona el repositorio utilizando `git`:
```git clone https://github.com/Kevin-STU/IntroPP2191928.git```

### Compilación y Ejecución

Para compilar el código secuencial, se utiliza el siguiente comando:

```gcc -Wall -fopenmp -std=c99 sumfibonacci.c -o sumfibo```

Donde:
- `-Wall`: Habilita todas las advertencias para una compilación más segura.
- `-fopenmp`: Habilita la biblioteca OpenMP para la programación paralela.
- `-std=c99`: Indica el estándar C99.
- `sumfibonacci.c`: El código fuente a compilar.
- `-o sumfibo`: El nombre del archivo ejecutable resultante.

Para ejecutar el programa secuencial, se usa el siguiente comando:

```./sumfibo```

Para compilar el código paralelo, se utiliza el siguiente comando:

```gcc -Wall -fopenmp -std=c99 sumfibonacci_omp.c -o sumfibo_omp```

Para ejecutar el programa paralelo, se usa el siguiente comando:
```./sumfibo_omp```

## Comparación de Tiempos de Ejecución

Se realizaron comparaciones de tiempos de ejecución con diferentes valores de N para evaluar el rendimiento de las implementaciones secuencial y paralela.

### Resultados

A continuación se presentan los tiempos de ejecución obtenidos:

- Con N = 150000:
  - Código secuencial: 3.535937 [ms]
  - ![Ejemplo](Imagenes/150000%20secuencial.png)
  - Código paralelizado: 3.192182 [ms]




- Con N = 5:
  - Código secuencial: 0.002108 [ms]
  - Código paralelizado: 0.431494 [ms]

### Conclusiones

Los resultados muestran que el código paralelizado es más rápido que el código secuencial cuando se trabaja con un valor grande de N (150,000 en este caso). Esto se debe a la capacidad del código paralelo para aprovechar múltiples núcleos de CPU y distribuir el trabajo de manera eficiente en problemas más grandes.

Sin embargo, es importante destacar que el código paralelizado puede mostrar un rendimiento inferior al código secuencial cuando se trabaja con valores muy pequeños de N (5 en este caso). Esto se debe a la sobrecarga introducida por la paralelización, que puede ser significativa en problemas pequeños. La administración de hilos y la sincronización entre ellos pueden requerir más tiempo que la propia ejecución secuencial del problema.

### Posibles Razones

Las posibles razones de por qué el código paralelizado funciona mejor con N grande pero más lento con N pequeños incluyen:

1. Sobrecarga de paralelización: La creación y administración de hilos paralelos introduce cierta sobrecarga en el rendimiento. Esta sobrecarga puede ser más evidente en problemas pequeños donde la ejecución secuencial es rápida.

2. Balance de carga: Para valores pequeños de N, es posible que algunos hilos paralelos no tengan suficiente trabajo para justificar la paralelización completa. Esto puede resultar en una distribución desigual de la carga de trabajo entre los hilos.

3. Sincronización: La necesidad de sincronizar hilos puede aumentar el tiempo de ejecución en problemas pequeños. La sincronización se vuelve más costosa en términos de tiempo a medida que se incrementa el número de hilos.

En resumen, la elección entre la implementación secuencial y paralela debe basarse en el tamaño del problema a resolver. Para problemas grandes, la implementación paralela puede ofrecer un rendimiento significativamente mejor, mientras que para problemas pequeños, la implementación secuencial puede ser más eficiente debido a la falta de sobrecarga de paralelización.





