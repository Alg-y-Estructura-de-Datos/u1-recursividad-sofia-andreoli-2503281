/*
 Crear un programa que pida al usuario un número entero positivo "n". Luego
implementar una función recursiva que cuente la cantidad de dígitos pares que
ocupan posiciones impares (identificándolas de izquierda a derecha) en "n". Ej.: si
el número es 22005 el resultado es 2, y si fuera 1414 el resultado es 0

*/
#include<iostream>
using namespace std;
int contar(int n, int pos){
    if(n == 0){
        return 0;
    }
    int contador = contar(n/10, pos+1);
    int digito = n % 10;
    if(pos % 2 != 0 && digito % 2 == 0){
        return contador + 1;
    } else {
        return contador;
    }
}

int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    int resultado = contar(n, 1);

    cout << "Resultado: " << resultado;
    return 0;
}
