/*
 Ejercicio N°3
Implementar una función recursiva que dado un número entero lo muestre de forma
 invertida ej: 10523 de mostrar 32501. Dar aviso de error en caso de uso de números
 negativos y mostrar primero el número a invertir y después el número invertido.

 */
#include<iostream>
using namespace std;
void invertir(int n){
if(n==0){
    return;
}else{
    cout<<n%10;
    return invertir(n/10);

}
}
int main(){
    int n=10523;
    cout<<"numero original: "<<n<<endl;
    cout<<"numero invertido: "<<endl;
    invertir(n);
}