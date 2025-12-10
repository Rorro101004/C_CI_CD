#include <stdio.h>

// --- LA LÓGICA (Lo que se va a probar) ---
int suma(int a, int b) {
    return a + b;
}
int resta(int a, int b){
    return a - b;
}
int multiplicacion(int a, int b){
    return a * b;
}
#include <stdio.h>

// ... tus otras funciones (suma, resta, multiplicacion) ...

int division(int a, int b){
    // VALIDACIÓN: "Mirar antes de saltar"
    if (b == 0) {
        printf("No se puede dividir entre cero.\n");
        return 0; 
    }
    return a / b;
}

    
// --- EL PROGRAMA PRINCIPAL ---
#ifndef TEST 
int main() {
    int a = 10;
    int b = 5;
    int c = 0; // Para probar la división por cero

    printf("=== REPORTE DE CALCULADORA ===\n");
    printf("Numeros de prueba: %d y %d\n", a, b);
    printf("-----------------------------\n");
    
    printf("➕ Suma:           %d\n", suma(a, b));
    printf("➖ Resta:          %d\n", resta(a, b));
    printf("✖️ Multiplicacion: %d\n", multiplicacion(a, b));
    printf("➗ Division:       %d\n", division(a, b));
    
    printf("-----------------------------\n");
    printf("⚠️ Prueba de error (dividir por cero):\n");
    // Esto debería imprimir tu mensaje de error y devolver 0
    division(a, c); 

    return 0;
}
#endif