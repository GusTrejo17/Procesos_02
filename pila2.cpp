#include <iostream>
#include <conio.h>
#include <stdlib.h> //utilizar para new
#include <string.h>

using namespace std;
struct nodo{
	int dato;
	nodo *siguiente;
};
struct nodo2{
	string nombre;
	nodo2 *siguiente2;	
};

void sacarpila(nodo *&pila, int &);
void agregarpila(nodo *&pila, int n);
void agregarpila2(nodo2 *&pila2, string nom);
void sacarpila2(nodo2 *&pila2, string &);

int main (){
	nodo *pila=NULL;
	nodo2 *pila2=NULL;
	int dato;
	string nom; 
	int opc;
	char r;
	string nombre;
	do{
	cout<<"\n\t\t\ Menu"<<endl;
	cout<<"\t 1) Agregar un Registro"<<endl;
	cout<<"\t 2) Eliminarar Registro"<<endl;
	cout<<"\t\n Seleccione una opcion: ";
	cin>>opc;
	switch(opc){
		case 1:
			do{	
			system ("cls");
			cout<<"\n\tIngresa nombre de la persona -> ";
			cin>>nombre;
			agregarpila2(pila2,nom);
			cout<<"\n\tIngrese edad de la persona -> ";
			cin>>dato;
			agregarpila(pila,dato);
			cout<<"\n\tPara terminar el sistema presione 0: ";
			cin>>r;
	}while(r!='0');
	break;
		case 2:
			cout<<"\n\tElementos sacados de la pila correctamente"<<endl;
			while(pila!=NULL){
			sacarpila(pila,dato);
			sacarpila2(pila2,nom);
			if (pila!=NULL){
			cout<<"\t"<<nombre<<" , "<<dato<<".\n";
			}
			else{
			cout<<"\t"<<nombre<<" , "<<dato<<".\n";
			}
		}
				system ("pause");
		break;
		default:
		system ("cls");
			cout<<"\tOpcion incorrecta"<<endl;
	}
	system ("cls");
	cout<<endl<<"\n\tDesea realizar otra operacion? s/n: ";
	cin>>r;
	system ("cls");
}while(r!='n');
}

void agregarpila(nodo *&pila, int n){
	nodo *nvo_nodo=new nodo();
	nvo_nodo->dato=n;
	nvo_nodo->siguiente=pila;
	pila=nvo_nodo;
	
	cout<<"\n\tEdad"<<"\tAgregada correctamente"<<endl;
}

void sacarpila(nodo *&pila, int &n){
	nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
}

void agregarpila2(nodo2 *&pila2, string nom){
	nodo2 *nvo_nodo2=new nodo2();
	nvo_nodo2->nombre=nom;
	nvo_nodo2->siguiente2=pila2;
	pila2=nvo_nodo2;
	
	cout<<"\n\tNombre"<<"\tAgregado correctamente"<<endl;	
}

void sacarpila2(nodo2 *&pila2, string &nom){
	nodo2 *aux=pila2;
	nom=aux->nombre;
	pila2=aux->siguiente2;
	delete aux;
}




