#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	float peso_kg,peso_lb,razon=453.59/1000;
	
		cout<<"Ingrese su peso en libras: "<<endl;
			cin>>peso_lb;
	
	peso_kg= peso_lb*razon;
	
	
		cout<<"Su peso es de: "<<peso_kg;
		cout<<" kilogramos";
	
	
	
	getch();
}
