/*Ejercicio 1: Hacer un programa para agregar numeros enteros a una pila,
hasta que el  usuario lo decida, despues mostrar todos los numeros
introducidos en la pila */

#include <iostream>
#include <conio.h>
using namespace std;

 struct nodo{   //se necesita una estructura nodo
  int dato;     // para los numeros enteros
  nodo *siguiente; //nodo debajo de la pila
  };

  //propotipo de funcion

  void agregarpila(nodo*&,int); //nodo pasar como puntero y por referencia e int para el dato
  void sacarpila(nodo*&,int &); //ahora el elemento int & es por referencia

main(){
     nodo *pila =NULL; // para que la pila este vacia
     int dato;
     char res;

     do{//con el do se van agregar todos los elementos que quiera el usuario a la pila
       cout<<"Teclea un numero: ";
       cin>>dato;
       agregarpila(pila,dato);
       cout<<endl<<"deseas agregar otro elemento a pila s/n  ";
       cin>>res;
     }while(res=='s'|| res=='S');

     //mostrar todos los elementos de la pila
     cout<<endl<<"Sacando todos los elementos de la pila";
      while(pila!=NULL){ //mientras no sea el final de pila puedes sacar elementos
        sacarpila(pila,dato);
        if(pila!=NULL){
           cout<<dato<<",";
        }
        else{
          cout<<dato<<".";
        }
      }


 getch();
}

void agregarpila(nodo *&pila, int n){  //n son los datos que agrega el usuario
   nodo *nvo_nodo = new nodo(); //crear un nuevo nodo y reservar memoria para el nvo nodo (new)
   nvo_nodo->dato =n;   //guarda nuevo elemento en la pila
   nvo_nodo->siguiente = pila; // rellenar la pila
   pila = nvo_nodo; //espera el nuevo elemento

   cout<<"El elemento ha sido agregado a pila correctamente";
}
void sacarpila(nodo *&pila, int &n){
  nodo *aux= pila;
  n= aux->dato;
  pila =aux->siguiente;
  delete aux;
}
