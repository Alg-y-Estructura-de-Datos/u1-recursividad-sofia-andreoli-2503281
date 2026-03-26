/*
 Ejercicio N°4

 Crear un programa que emplee recursividad para calcular el mayor de los elementos
 de un vector de “n” tamaño dado por pantalla por el usuario.
 */
#include<iostream>
using namespace std;

int calcularMayor(int vector[], int n){
    if(n == 1){
        return vector[0];
    } else {
        // Llamada recursiva
        int maxAnterior = calcularMayor(vector, n-1);

        // Comparo el último elemento con el máximo anterior
        if(vector[n-1] > maxAnterior){
            return vector[n-1];
        } else {
            return maxAnterior;
        }
    }
}

int main(){
    int n, vector[100];

    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Ingrese el valor en la posicion " << i << ": ";
        cin >> vector[i];
    }

    int mayor = calcularMayor(vector, n);

    cout << "El mayor es: " << mayor << endl;

    return 0;
}