/*1. Crear un programa que pida un número y muestre el cubo, cuadrado o la sucesión de fibonacci del número, según pida el usuario.*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int cubo(int);
int cuadrado(int);
int fibonacci(int);

int main(){
	
	
	int selec = 1,
		n;
	
	
	
	while (selec != 0){
	cout << "\n1) Eleva el numero al cubo  " <<endl <<
			"2) Eleva el numero al cuadrado "<<endl <<
			"3) Fibonacci  " <<endl <<
			"4) Digite 0 para salir . "<<endl ;
	cout << "\nElige una opcion : ";	cin>> selec;
	cout << endl;
		switch ( selec ) {
			case 1:
				cout<<"\n Ingrese un numero : "; cin >> n;
				cout << cubo(n);
			break;
			case 2:     
				 cout<<"\n Ingrese un numero : "; cin >> n;     
				cout << cuadrado(n);
				
			break;
			case 3:
				cout<<"\n Ingrese un numero : "; cin >> n;
				cout<<fibonacci(n)<<endl;
			break;
						
			default: 
				cout<<"Saliendo !!!\n";
			break;
		}
	}
	
	
	return 0;
	

}

int cubo(int n){
	return n*n*n;
}
int cuadrado(int n){
	return n*n;
}
int fibonacci(int n)
{
	
	if(n<=1)

		return 1; 

	return fibonacci(n-1) + fibonacci(n-2); 


	
}
