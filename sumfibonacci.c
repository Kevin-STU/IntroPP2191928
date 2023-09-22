#include <stdio.h>
#include <omp.h>
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int sumEvenFibonacci(int n) {
    int sum = 0;
    for (int i = 0; i <= 2*n; i += 2) {
        sum += fibonacci(i);
    }
    return sum;
}

int main() {
    int n;

    printf("Ingrese el valor de N: ");
    scanf("%d", &n);

	double inicio = omp_get_wtime();
	
    int sum = sumEvenFibonacci(n);
	
	double final = omp_get_wtime();
	
	double tiempo = (final - inicio) * 1000.0;

    printf("La suma de los numeros de Fibonacci en indices pares hasta %d terminos es: %d\n", n, sum);
	printf("Tiempo de ejecucion: %.2f ms\n", tiempo);

    return 0;
}
