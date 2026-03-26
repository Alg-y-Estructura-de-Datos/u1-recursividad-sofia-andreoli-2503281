/*
Ejercicio N°2
Implementar una función recursiva que determine la suma de los “n” primeros números
 naturales ej: para n=5 mostrar por pantalla 1+2+3+4+5 y luego el resultado de la suma.
 */
#include<iostream>
using namespace std;

int sumaRecursiva(int n){;
    if(n==0){
        return n;
    }
    else{
       
         cout<<n<<" + ";
      return n+sumaRecursiva(n-1);
    }//n tiene que ir decrementando una unidad
}
int main(){
    int n=5, suma;
    
    cout<<"la suma de los"<< n <<"numeros naturales es: ";
    suma=sumaRecursiva(n);

    cout<<"="<<suma<<endl;
}