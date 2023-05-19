#include <iostream>
using namespace std;
int CalcularDoble(int n);
int main ()
{
	int a;
	cout<<"Ingrese un numero: ";
	cin>>a;
	cout<<CalcularDoble(a);
	return 0;	
}
int CalcularDoble(int n)
{
	int doble;
	doble=n+n;
	return doble;
}