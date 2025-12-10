#include <stdio.h>
#include <assert.h>

// Declaramos que existe una función 'suma' en otro archivo
int suma(int a, int b);

void ejecutar_pruebas() {
    // 1. Prueba básica
    assert(suma(5, 10) == 15);
    
    // 2. Prueba con negativos
    assert(suma(10, -3) == 7);
    
    // 3. Prueba de doble negativo
    assert(suma(-5, -5) == -10);

    printf("Todas las pruebas pasaron correctamente. ✅\n");
}

int main() {
    printf("=== Ejecutando Suite de Pruebas ===\n");
    ejecutar_pruebas();
    return 0;
}