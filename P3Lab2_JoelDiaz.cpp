#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <iomanip>
#include "matriz.cpp"
#include "bitacora.cpp"
using namespace std;

bool t = true;

int main(){
	bool s;
	int numM;
	int f2, c2;
	matriz *m1;
	matriz *m2;
	bitacora b;
	int op=1, num;
	cout<<"----------MATRIZ INICIAL----------"<<endl;
	cout<<"Desea ingresar tamanos o crear una matriz de 5x5? [1=Ingresar tamanos \ 2=Matriz 5x5]"<<endl;
	cin>>op;
	if(op==1){
		int f,c;
		cout<<"Ingrese filas: "<<endl;
		cin>>f;
		cout<<"Ingrese columnas: "<<endl;
		cin>>c;
		m1 = new matriz(c,f);
	}
	if(op==2){
		m1 = new matriz();
	}
	//
	m1->print();
	while(t){
		cout<<endl;
		cout<<"Ingrese una opcion: "<<endl;
		cout<<"1) Sumar matrices"<<endl;
		cout<<"2) Restar matrices"<<endl;
		cout<<"3) Multiplicar matrices"<<endl;
		cout<<"4) Mostrar bitacora"<<endl;
		cout<<"5) Vaciar bitacora"<<endl;
		cout<<"6) Borrar ultimo bitacora"<<endl;
		cout<<"7) Salir"<<endl;
		cin>>op;
		switch(op){
			case 1://suma
				cout<<"Ingrese filas de la segunda matriz: "<<endl;
				cin>>f2;
				cout<<"Ingrese columnas de la segunda matriz: "<<endl;
				cin>>c2;
				m2 = new matriz(c2,f2);
				s = m1->suma(*m2);
				if(s==false){
					cout<<"No se puede hacer esta operacion con matrices de diferentes tamanos!"<<endl;
					b.agregar("Suma", false);
				} else {
					b.agregar("Suma", true);
				}
				cout<<endl;
				break;
			case 2://resta
				cout<<"Ingrese filas de la segunda matriz: "<<endl;
				cin>>f2;
				cout<<"Ingrese columnas de la segunda matriz: "<<endl;
				cin>>c2;
				m2 = new matriz(c2,f2);
				s = m1->resta(*m2);
				if(s==false){
					cout<<"No se puede hacer esta operacion con matrices de diferentes tamanos!"<<endl;
					b.agregar("Resta", false);
				} else {
					b.agregar("Resta", true);
				}
				cout<<endl;
				break;
			case 3://multiplicacion
				cout<<"Ingrese numero a multiplicar: "<<endl;
				cin>>numM;
				m1->multiplicacion(numM);
				b.agregar("Multiplicacion", true);
				cout<<endl;
				break;
			case 4://bitacora imp
				b.print();
				break;
			case 5://bitacora limp
				b.limpiar();
				cout<<"Bitacora borrada!"<<endl;
				break;
			case 6://bitacora borrar ultimo
				b.borrarUltimo();
				cout<<"Ultimo elemento eliminado!"<<endl;
				break;
			case 7://salir
				return 0;
				break;
		}
	}
	//
	return 0;
}
