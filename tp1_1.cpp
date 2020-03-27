#include <stdio.h>

int main (){

    int Num1 = 5;
    int * pNum1;
    pNum1 = &Num1;

    // Contenido del Puntero
    printf("El contenido del puntero es: %d.\n", *pNum1);

    //Direccion de memoria almacenada en el puntero
    printf("La direccion de memoria almacenada en el puntero es: %p.\n", pNum1);

    //Direccion de memoria de la variable
    printf("La direccion de memoria de la variable es: %p.\n", &Num1);

    //Direccion de memoria del puntero
    printf("La direccion de memoria del puntero es: %p.\n", &pNum1);

    //Tamaño de memoria de la variable con sizeof()
    printf("El tamaño de memoria utilizado por la variable Num1 es: %d Bytes.\n", sizeof(Num1));
    getchar();

    return 0;
}