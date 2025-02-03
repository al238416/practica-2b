//Practica 2.B 
//Ivan Alejandro Flores Gallardo
//238416

#include <iostream>
using namespace std;


int main() {
  
  int x=15;// Altura del pino por renglon 
  int a=1; //variable que ayudara a sumar asteriscos 
 
  //Arbol de pino
  while(x>=0){
    for(int i=0; i<=x; i++){
      cout<<" ";
    }//contador de espacios para el pino
    
    for(int k=0; k<a; k++){
      cout<<"*";
    }// impresion de asteriscos
    cout<<"\n";//saltio de renglon
  
     x=x-1;
    a=a+2;  
  }
  int h=5;
  
  //tronco 
  while(h>=0){
    int p=0;
    while(p<13){
      cout<<" ";
      p++;
    }// funcion espaciqdor parqa el tronco
    for(int l=0; l<=5; l++){
    cout<<"*";
  }//funcion creador del tronco
    cout<<"\n";
    h=h-1;
  }
}