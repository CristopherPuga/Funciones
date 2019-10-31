#include<iostream>
#include<cstdlib>
using namespace std;
int suma();
int resta();
int multiplicacion();
int division();
int pausa();
int main()
{
	bool BANDERA = false;
	char TECLA;
	
	do
	{
		system("color 65");
		system("cls");
		cin.clear();
		cout << "\n";
		cout << "							Calculadora" << endl;
		cout << "							-----------" << endl << endl;
		cout << "\t1 .- Sumar" << endl;
		cout << "\t2 .- Restar" << endl;
		cout << "\t3 .- Multiplicar" << endl;
		cout << "\t4 .- Dividir" << endl;
		cout << "\t5 .- Salir" << endl << endl;
		cout << "	-Elije una opcion: ";
		cin >> TECLA;
		switch (TECLA)
		{
		case '1':
			system("cls");
			cout << "	-Has elejido Sumar. \n";
			pausa();
			break;
		case '2':
			system("cls");
			cout << "	-Has elejido Restar. \n";
			pausa();
			break;
		case '3':
			system("cls");
			cout << "	-Has elejido Multiplicar. \n";
			pausa();
			break;
		case '4':
			system("cls");
			cout << "	-Has elejido Dividir. \n";
			pausa();
			break;
		case '5':
			BANDERA = true;
			break;
		default:
			system("cls");
			cout << "	-Opcion no valida. \a\n";
			pausa();
			break;
		}
	} while (BANDERA != true);
	return 0;
}
int pausa()
{
	cout << "	-Pulsa una tecla para continuar...";
	getwchar();
	getwchar();
}

int suma()
{
	int a, b, suma;
	cout << "Primer valor: ";
	cin >> a;
	cout << "Segundo valor: ";
	cin >> b;
	suma = a + b;
	cout << "La suma es: " << suma;
	pausa();
	return 0;
}

int resta()
{
	int a, b, suma;
	cout << "Primer valor: ";
	cin >> a;
	cout << "Segundo valor: ";
	cin >> b;
	suma = a - b;
	cout << "La suma es: " << suma;
	pausa();
	
}
int multiplicacion()
{
	int a, b, suma;
	cout << "Primer valor: ";
	cin >> a;
	cout << "Segundo valor: ";
	cin >> b;
	suma = a * b;
	cout << "La suma es: " << suma;
	pausa();
	

}
int division()
{
	int a, b, suma;
	cout << "Primer valor: ";
	cin >> a;
	cout << "Segundo valor: ";
	cin >> b;
	suma = a / b;
	cout << "La suma es: " << suma;
	pausa();

}