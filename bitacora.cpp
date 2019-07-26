#include<iostream>
#include<iomanip> 
#include<string>
#include <ctime>
#include <vector>
#include <bits/stdc++.h> 
#include <cstdlib>

#ifndef BITACORA_CPP
#define BITACORA_CPP

using namespace std;

class bitacora{
	private:
		vector<string>l1;
		vector<bool>l2;		
	public:
		void agregar(string op, bool s) {
			l1.push_back(op);
			l2.push_back(s);
		}
		void print() {
			if(l1.size()==0 && l2.size()==0){
				cout<<"Bitacora vacia"<<endl;
			}
			for(int i=0; i<l1.size(); i++){
				if (l2.at(i)){
					cout<<l1.at(i)<<": "<<"exito"<<endl; 
				} else {
					cout<<l1.at(i)<<": "<<"fallido"<<endl;
				}
			}
		}
		void limpiar(){
			l1.clear();
			l2.clear();
		}
		
		void borrarUltimo(){
			l1.erase(l1.end()-1);
			l2.erase(l2.end()-1);
		}
		~bitacora(){}
};

#endif
