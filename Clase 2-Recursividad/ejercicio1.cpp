#include<iostream>
using namespace std;

 int potencia(int base, int exponente){
        if(exponente==0){ //caso base, cualquier numero elevado a la potencia 0 es 1
            return 1;
        }else{
           return base* potencia(base, exponente-1);
        }
    }
int main(){

    int base=3;
    int exponente=2;

    int resultado=potencia(base, exponente);
    cout<<"el valor de "<<base<<" elevado a "<<exponente<<" es "<<resultado;

}