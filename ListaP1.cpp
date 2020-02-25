#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};

void menu();
void insertar(nodo *&, int); //prototipo de la funcion

main(){
	menu();	 	
	getch();
}

void menu(){
	int dato;
	int opc;
	char r;
	nodo *lista = NULL;

	do{
	cout<<"\n\t\t\ Menu"<<endl;
	cout<<"\t 1) Insertar Datos"<<endl;
	cout<<"\t 2) Mostrar Datos"<<endl;
	cout<<"\t 3) Buscar un Elemento"<<endl;
	cout<<"\t 4) Eliminar Elemeto"<<endl;
	cout<<"\t 5) Eliminar...."<<endl;
	cout<<"\t 6) Salir"<<endl;
	cout<<"\t\n Seleccione una opcion: ";
	cin>>opc;
	switch(opc){
		case 1:
			system ("cls");
			do{	
		     cout<<"\tTeclee un Numero->    ";
             cin>>dato;
             insertar(lista,dato);
             cout<<"\tDesea agregar otro s/n: ";
             cin>>r;
	}while(r!='n');
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
void insertar(nodo *&lista, int n){
	nodo *nvo_nodo = new nodo();
	nvo_nodo -> dato = n;
    nodo *aux1 = lista;
	nodo *aux2;
	while((aux1!=NULL)&&(aux1->dato<n)){
		aux2 = aux1;
		aux1 = aux1 -> siguiente;
	}
}
