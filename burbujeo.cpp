/* Burbujeo


*/


# include <iostream>

using namespace std;

void Burbujeo (int a[] , int lon); 


int main () {
	
int a[100];
int lon ; 
	
	
cout<< "Ingrese el numero de elementos"<< endl;
cin>> lon;

cout<< "Ingrese los elementos y toque enter despues de cada uno"<< endl;

 for (int i=1;i<=lon;i++){
     
	 
	 cin>> a[i];
 
 
 }
	
Burbujeo(a,lon);	

for (int i = 0 ; i<lon ; i ++) {
	
	
	cout<< a[i] << endl;
	
}
	
	
	
	
	
}



void Burbujeo (int a[] , int lon){
	
	int ordenado = 0;
	
	while (!ordenado)
	
	
        ordenado=1;
        
        for (int i = 0; i<lon-1 ; i++) {
        	
        	
        	if (a[i] >a[i+1]){
        		
        		int aux=a[i];
        		a[i] = a[i+1];
        		a[i+1] = aux;
        		ordenado = 0;
			}
		}
}
