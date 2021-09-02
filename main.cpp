#include <iostream>
using namespace std;
int main() {
  //Formula de la interpolacion;
  //medio = primero +((num - A[primero])*(ulltimo - primero))/(A[ultimo] - A[primero])
int A[7]={1,24,3,45,67,89, 5};
int primero = 0;
int ultimo = 7-1;
int medio;
int n = 89;
int contador = 0;
while (A[primero] != n && contador < 7 ){
  medio = primero + ((n - A[primero])*(ultimo - primero))/(A[ultimo] - A[primero]);
  if(A[medio] < n){
    primero = medio +1;
  }
    else if (A[medio] > n){
    ultimo = medio - 1;
    }
    else {
      primero = medio;
      contador++;
      break;
    }
    if (A[primero] == n){
    cout<<"Elemento encontrado";
    }
    else {
    cout<<"Elemento no encontrado";
    }
    }
}
