#include <iostream>
#include <string>

using namespace std;

int main() {
	//declarar las variables

	int opcion; // casos
	string nombre, mes,  tratamiento; // guardar nombres
	int menu; //para poder acceder al menu
	int dia, hora, preciou, cantidad, preciotrat; //guardar numeros
	int num = 0; //numero de cita
	int nuev; //confirmar nueva cita
	int salir;

	cout << "-BIENVENIDO A DENTAL SONRISAS: DONDE CUIDAMOS TU SONRISA-" << endl << endl;
	cout << "Ingrese la opcion que desee: " << endl << endl;
	
	do { // do para abrir el menu
		cout << "-----MENU-----" << endl << endl;
		cout << "1. AGENDAR CITA" << endl; //opciones
		cout << "2. MODIFICAR CITA" << endl;
		cout << "3. ELIMINAR CITA" << endl;
		cout << "4. LISTA DE CITAS VIGENTES" << endl;
		cout << "5. LIMPIAR PANTALLA" << endl;
		cout << "6. SALIR" << endl << endl;
		cin >> opcion;
		cout << "------------------------" << endl;

		switch (opcion) {
		case 1:       //primer cita
			cout << "------AGENDAR CITA------" << endl << endl;
			cout << "-Ingrese su nombre: -" << endl;
			cin >> nombre;
			cout << "\n-Ingrese el dia en que desee su cita: -" << endl;
			cin >> dia;
			cout << "\n-Ingrese el nombre del mes en que desee su cita: -" << endl;
			cin >> mes;
			cout << "\n-Ingrese el horario (24 hrs) en que desee su cita: -" << endl;
			cin >> hora;
			cout << "\n-Ingrese su tratamiento: -" << endl;
			cin >> tratamiento;
			cout << "\n-Ingrese el precio de su tratamiento: -" << endl;
			cin >> preciotrat;
			cout << "\n-Ingrese la cantidad de su tratamiento: -" << endl;
			cin >> cantidad;
			//poner el numero de cita
			(num = num + 1);
			cout << "\n-La cita #" << num << " ha sido agendada a nombre de "
				<< nombre << " para el dia " << dia << " del mes de " << mes << " a las " << hora << "horas" <<
				" bajo el tratamiento de " << tratamiento << "con un precio de $" << preciotrat << endl << endl;
			cout << "-Desea agendar una nueva cita? (1) Si (2) No" << endl; 
			cin >> nuev; //fin primer cita
			  if(nuev==1)
				  do { //segunda cita 
					  cout << "------AGENDAR CITA------" << endl << endl;
					  cout << "-Ingrese su nombre: -" << endl;
					  cin >> nombre;
					  cout << "\n-Ingrese el nombre del mes en que desee su cita: -" << endl;
					  cin >> mes;
					  cout << "\n-Ingrese el horario (24 hrs) en que desee su cita: -" << endl;
					  cin >> hora;
					  cout << "\n-Ingrese su tratamiento: -" << endl;
					  cin >> tratamiento;
					  cout << "\n-Ingrese el precio de su tratamiento: -" << endl;
					  cin >> preciotrat;
					  cout << "\n-Ingrese la cantidad de su tratamiento: -" << endl;
					  cin >> cantidad;
					  (num = num + 1);
					  cout << "\n-La cita #" << num << " ha sido agendada a nombre de " 
					  << nombre << " para el dia " << dia << " del mes de " << mes << " a las " << hora << "horas" <<
						  " bajo el tratamiento de " << tratamiento << "con un precio de $" << preciotrat <<endl << endl;
					  cout << "-Desea agendar una nueva cita? (1) Si (2) No" << endl;
					  cin >> nuev; //fin segunda cita
				  } while (num <= 3);
				  if (num == 3) cout << "-Ha alcanzado el numero maximo de citas-" << endl;
			cout << "\n-Presione 1 para regresar al menu o cualquier otro numero para salir del sistema-" << endl;
			cin >> menu;
			break;
		case 6: //salir del sistema
			cout << "Desea salir del sistema? (1) Si (2) No" << endl;
			cin >> salir;
			if (salir == 1) return 0; //cierra el programa
			else cout << "Presione 1 para regresar al menu" << endl;
			cin >> menu; //regresar
			break;
		default:
			cout << "Opcion no valida: presione 1 para regresar" << endl;
			cin >> menu;
		}
	} while (menu == 1); //while para abrir el menu
	return 0;

}