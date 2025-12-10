#include <stdio.h>
#include <assert.h>

// Declaramos las funciones que vienen del otro archivo
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);

void ejecutar_pruebas() {
    printf("1. Probando SUMA...\n");
    assert(suma(5, 5) == 10);
    assert(suma(-2, -3) == -5);

    printf("2. Probando RESTA...\n");
    assert(resta(10, 5) == 5);     // 10 - 5 = 5
    assert(resta(5, 10) == -5);    // 5 - 10 = -5
    assert(resta(10, 10) == 0);    // 10 - 10 = 0
    assert(resta(-5, -5) == 0);    // -5 - (-5) = 0

    printf("3. Probando MULTIPLICACION...\n");
    assert(multiplicacion(5, 5) == 25);
    assert(multiplicacion(10, 0) == 0);   // Multiplicar por cero
    assert(multiplicacion(5, -2) == -10); // Positivo * Negativo

    printf("4. Probando DIVISION...\n");
    assert(division(10, 2) == 5);  // División exacta
    assert(division(100, 10) == 10);
    
    // OJO: División entera. En C, 5 / 2 es 2, no 2.5
    assert(division(5, 2) == 2);   
    assert(division(20,0 ) == 0); 
    // IMPORTANTE: Nunca hagas assert(division(5, 0)) porque el programa explotará.

    printf("\n>> TODAS LAS PRUEBAS PASARON CORRECTAMENTE ✅\n");
}

int main() {
    ejecutar_pruebas();
    return 0;
}