#include<iostream>
#include<string>

using namespace std;
void menu();
int suma();
int resta();
int multi();
int division();
void pausa();

int main()
{
	menu();
		return 0;
}
void menu()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "Calculadora con funciones" << endl;
		cout << "==========================" << endl;
		cout << "\t1.-Sumar" << endl;
		cout << "\t2.-Restar" << endl;
		cout << "\t3.-Nultiplicar" << endl;
		cout << "\t4.-Dividir" << endl;
		cout << "\t5.-Salir" << endl;
		cout << "Elije una opcion: ";
		cin >> tecla;

		switch (tecla)
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
			bandera = true;
			break;
		default:
			system("cls");
			cout << "	-Opcion no valida. \a\n";
			pausa();
			break;
		}
	} while (bandera != true);
	
}
void pausa()
{
	cout << "	-Pulsa una tecla para continuar...";
	getwchar();
	getwchar();
}



