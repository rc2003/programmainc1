#include <iostream>


int main()
{

using namespace std;
int i, n, a ;
	
cout<< "Ciao, quanto vuoi sia lungo il tuo array? ";
cin>>n;
	
int numeri [n];
	
for (i=0; i<n; i++)
{
	cout<<"Inserisci il valore da mettere nell'array \n" ;
	cin>>numeri[i];
}
for (a=0; a<n; a++)
{
	cout<< numeri[a]<< ",";

}



	
	return 0;

}
