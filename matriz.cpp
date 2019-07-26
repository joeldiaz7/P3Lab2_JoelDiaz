#include<iostream>
#include<iomanip> 
#include<string> 
#include<ctime>
#include<cstdlib>

#ifndef MATRIZ_CPP
#define MATRIZ_CPP
using namespace std;

class matriz{
      private:
      		int **mat;
        	int cols;
            int fils;
      public:
      	//5*5
		matriz() {
			
			this->fils = 5;
			this->cols = 5;
			
			mat = new int *[fils];
			
			for(int i = 0; i < fils; i++){
				mat[i] = new int[cols];
			}
			
			for (int i = 0; i < fils; i++) {
				for (int j = 0; j < cols; j++) {
					mat[i][j] = (rand()% 9)+ 1;
				}
			}
		}
		//dif sizes
		matriz(int fils, int cols) {
			
			this->cols = cols;
			this->fils = fils;
			
			
			mat = new int *[fils];
			
			for(int i = 0; i < fils; i++){
				mat[i] = new int[cols];
			}
			
			for (int i = 0; i < fils; i++) {
				for (int j = 0; j < cols; j++) {
					mat[i][j] = (rand()% 9)+ 1;
				}
			}		
		}
            void print(){
			    for (int x=0; x<fils; ++x)
			    {
			        for (int y=0; y<cols; ++y)
			        {
			            cout<<"[" << mat[x][y] << "]";
			        }
			        cout<<endl;
			    } 
            } 
            //suma
            bool suma(matriz m2){
            	if(cols==m2.getCols() && fils==m2.getFils()){
            		this->print();
            		cout<<"+"<<endl;
            		m2.print();
            		cout<<"="<<endl;
            		//
				  	for(int i = 0; i < fils; ++i){
						for(int j = 0; j < cols; ++j){
					      	mat[i][j] = mat[i][j]+(m2.getMat())[i][j];
					    }	
				    }
			    	//
			    	this->print();
            		return true;
				} else {
					return false;
				}
			}
			//resta
            bool resta(matriz m2){
            	if(cols==m2.getCols() && fils==m2.getFils()){
            		this->print();
            		cout<<"-"<<endl;
            		m2.print();
            		cout<<"="<<endl;
            		//
				  	for(int i = 0; i < fils; ++i){
						for(int j = 0; j < cols; ++j){
					      	mat[i][j] = mat[i][j]-(m2.getMat())[i][j];
					    }	
				    }
			    	//
			    	this->print();
            		return true;
				} else {
					return false;
				}
			}
			//multiplicacion
            void multiplicacion(int n){
            		cout<<n<<endl;
            		cout<<"*"<<endl;
            		this->print();
            		cout<<"="<<endl;
            		//
				  	for(int i = 0; i < fils; ++i){
						for(int j = 0; j < cols; ++j){
					      	mat[i][j] = mat[i][j]*n;
					    }	
				    }
			    	//
			    	this->print();
			}
            void setFils(int fils){
                  	this->fils=fils;
            }
            void setCols(int cols){
                 	this->cols=cols;
            }
            int **getMat(){
            	return mat;
			}
            int getFils(){
                return fils;
            }
            int getCols(){
                return cols;
            }         
            ~matriz(){}     
};
#endif
