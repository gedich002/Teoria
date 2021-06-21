#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
	
	float horas,s_bruto,s_neto,p_hora=30,impuesto=0.25;

		cout<<"Cuantas horas trabajaste?"<<endl;
	cin>>horas;

	s_bruto= horas*p_hora;

	s_neto= s_bruto - s_bruto*impuesto;

		cout<<"Tu salario neto despues de pagar impuestos es: $"<<s_neto;

getch();
}


