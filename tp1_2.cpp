#include <stdio.h>
#include <stdlib.h>

int Cuadrado(int Num1);
void CuadradoVoid(int Num1);
void DireccionContenido(int Num1);
void invertir(int *Num1, int *Num2);
void Ordenar(int *Num1, int *Num2);

int main (){

    // Apartado a)
    int Num1 = 2;
    int Num2 = 4;
    int Resultado;
    Resultado = Cuadrado(Num1);
    printf("El numero 2 al cuadrado es: %d.\n\n", Resultado);

    // Apartado b)
    CuadradoVoid(Num1);

    // Apartado c)
    DireccionContenido(Num1);

    // Apartado d)
    printf("Valores de las variables antes de invertir: Num1 = %d, Num2 = %d.\n", Num1, Num2);
    invertir(&Num1, &Num2);
    printf("Valores de las variables despues de invertir: Num1 = %d, Num2 = %d.\n\n", Num1, Num2);

    // Apartado e)
    printf("Numeros sin ordenar: Num1 = %d, Num2 = %d.\n", Num1, Num2);
    Ordenar(&Num1, &Num2);
    printf("Numeros ordenados: Num1 = %d, Num2 = %d.\n\n", Num1, Num2);

    // Apartado f)
    printf("Ingrese un numero cualquiera: ");
    scanf("%d", &Num1);
    printf("Ingrese otro numero cualquiera: ");
    scanf("%d", &Num2);

    if(Num1 != Num2){
        Ordenar(&Num1, &Num2);
        printf("Numeros ordenados ingresados: Num1 = %d, Num2 = %d.\n\n", Num1, Num2);
    } else{
        printf("Ingrese 2 numeros distintos.");
    }
    getchar();
    return 0;
}

int Cuadrado(int Num1){
    int resultado;

    resultado = Num1 * Num1;

    return resultado;    
}

void CuadradoVoid(int Num1){
    int resultado;
    resultado = Num1 * Num1;
    printf("El numero 2 al cuadrado es: %d.\n\n", resultado);
}

void DireccionContenido(int Num1){
    printf("La direccion de memoria de la variable es: %p.\n", &Num1);
    printf("El contenido de la variable es: %d.\n\n", Num1);
}

void invertir(int *Num1, int *Num2){
    int aux1;
    aux1 = *Num1;
    *Num1 = *Num2;
    *Num2 = aux1;
}

void Ordenar(int *Num1, int *Num2){
    int aux2;
    if(*Num1 > *Num2){
        aux2 = *Num1;
        *Num1 = *Num2;
        *Num2 = aux2;
        
    }
}