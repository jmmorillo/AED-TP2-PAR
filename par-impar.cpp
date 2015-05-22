/* Dado un numero, el programa nos dice si este es par.
/  Juan Manuel Morillo
/ 22-04-2015
*/

#include <iostream>

using namespace std;

int num, resto;

int main(){
	
	cout<<"\n\t\t-- PAR O IMPAR --\n";
	cout<<"\n\n\tIngrese un numero entero: ";
	cin>>num;
	
	resto=num%2;
		
	if(resto==0)
		
		{cout<<"\n\tEl numero ingresado es par.\n";
		}
		else
		{cout<<"\n\tEl numero ingresado es impar.\n";
		}
	
	return 0;
}
