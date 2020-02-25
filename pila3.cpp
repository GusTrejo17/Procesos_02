#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "gotoxy.h"

using namespace std;

struct nodo{
	string dato;
	float calificacion1;
	float calificacion2;
	float calificacion3;
	float promedio;
	nodo *siguiente;
};

void agregarpila(nodo *&, string,float,float,float,float);
void sacarpila(nodo *&pila, string &n, float &cal1,float &cal2,float &cal3,float &prom);
void titulos();

main (){
	nodo *pila=NULL;
	string dato;
	float calificacion1;
	float calificacion2;
	float calificacion3;
	float promedio;
	int opc;
	char res;
    do{
    system ("cls");
	cout << "\n 1) Introducir calificaciones \n 2) Eliminar Calificaciones\n 3) Salir del programa \n";
	cin >> opc;
	switch(opc){
		case 1:
			do{
	titulos();
	//cout<<"Introduzca su Nombre: ";
	gotoxy(25,6);
	cin>>dato;
    //cout<<"Introduzca su Calificacion 1: ";
    gotoxy(35,6);
	cin>>calificacion1;
	//cout<<"Introduzca su Calificacion 2: ";
gotoxy(45,6);	cin>>calificacion2;
	//cout<<"Introduzca su Calificacion 3: ";
gotoxy(55,6);	cin>>calificacion3;
	system("cls");
	agregarpila(pila,dato,calificacion1,calificacion2,calificacion3,promedio);
	cout<<"Desea otro dato? s/n: ";
	cin>>res;
	system("cls");
}while(res=='s'|| res=='S');
       break;
       case 2:
	   int x;
	   x=6;	
    //cout<<"Eliminando calificacion de la PILA"<<endl;
    while (pila!= NULL){
    sacarpila(pila, dato,calificacion1,calificacion2,calificacion3,promedio);
    titulos();
    if (pila !=NULL){
	gotoxy(25,x+1);	cout<<dato;
gotoxy(35,x+1);	cout<<calificacion1;
	gotoxy(45,x+1);cout<<calificacion2;
	gotoxy(55,x+1);cout<<calificacion3;
	gotoxy(65,x+1);cout<<promedio;
	x++;
	}
else
{
	x++;
	gotoxy(25,x+1);	cout<<dato;
gotoxy(35,x+1);	cout<<calificacion1;
	gotoxy(45,x+1);cout<<calificacion2;
	gotoxy(55,x+1);cout<<calificacion3;
	gotoxy(65,x+1);cout<<promedio;
	cout<<"\n Calificaion fue sacada de la pila correctamente"<<endl;
	}
}
    system ("PAUSE");
    break;
    case 3:
	cout << "GRACIAS POR USAR EL PROGRAMA";
	break;
	default:
	cout << "Opcion no corresponde al menu";
	break;
	}
    	
	}while(opc!=3);
getch();
}

void agregarpila(nodo *&pila, string n,float cal1,float cal2,float cal3,float prom){
	prom=(cal1+cal2+cal3)/3;
	nodo *nvo_nodo=new nodo();
	nvo_nodo-> dato=n;
	nvo_nodo-> calificacion1=cal1;
	nvo_nodo-> calificacion2=cal2;
	nvo_nodo-> calificacion3=cal3;
	nvo_nodo-> promedio=prom;
	nvo_nodo-> siguiente=pila;
	pila=nvo_nodo;
	titulos();
gotoxy(25,6);	cout<<n;
gotoxy(35,6);	cout<<cal1;
	gotoxy(45,6);cout<<cal2;
	gotoxy(55,6);cout<<cal3;
	gotoxy(65,6);cout<<prom;
	cout<<"\n Calificaion agragada correctamente correctamente"<<endl;
}

void sacarpila(nodo *&pila, string &n, float &cal1,float &cal2,float &cal3,float &prom){
	nodo *aux= pila;
	n= aux->dato;
	cal1= aux->calificacion1;
	cal2= aux->calificacion2;
	cal3= aux->calificacion3;
	prom= aux->promedio;
	pila = aux->siguiente;
	delete aux; 
}

void titulos(){
   gotoxy(25,5);cout<<"Nombre";
   gotoxy(35,5);cout<<"Cal1";
   gotoxy(45,5);cout<<"Cal2";
   gotoxy(55,5);cout<<"Cal3";
   gotoxy(65,5);cout<<"Promedio";
}
/*void entrada(Alumno a[],int lim){
 int x;
   for(x=0;x<lim;x++){
      gotoxy(10,6+x);cin>>a[x].matri;
      gotoxy(25,6+x);cin>>a[x].nom;
      gotoxy(40,6+x);cin>>a[x].edad;
      gotoxy(50,6+x);cin>>a[x].cal1;
      gotoxy(55,6+x);cin>>a[x].cal2;
      gotoxy(60,6+x);cin>>a[x].cal3;

   }
}

void calcular (Alumno a[], int lim){
int x;
   for(x=0;x<lim;x++){
	  a[x].prom=(a[x].cal1+a[x].cal2+a[x].cal3)/3;
      gotoxy(65,6+x);cout<<a[x].prom;
   }
}*/



