#include <iostream>
#include <fstream>
using namespace std;
int main() {
int a[50] , n = 0 , aus = 0;
ofstream archivo;
archivo.open("inserccion.txt", ios::out);
cout<<"Ingrese el tamaño del arreglo: ";
cin>>n; 
archivo<<"Datos del arreglo: ";
for(int i = 0 ; i < n ; i++){
cout<<"Ingrese el arrego en la posicion "<<i+1<<": ";
cin>>a[i];
archivo<<a[i];
}
archivo<<endl;
for(int i = 0  ; i < n ; i++){
   aus= a[i];
   int p = i;
   while(p > 0){
   if(a[p - 1] > aus){
     a[p] = a[p - 1];
     a[p - 1] =  aus;
   }
   p--;
   }
  }
  archivo<<"Datos del arreglo ordenado: ";
  for(int i = 0 ; i < n ; i++){
  cout<<a[i]<<" ";
  archivo<<a[i];
  }
}

