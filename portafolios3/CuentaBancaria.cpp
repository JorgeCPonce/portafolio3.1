#include <iostream>
#include <string>

using namespace std;

class CuentaBancaria{
	private: //Atributos
		int numeroCuenta;
		string nombreTitular;
		double saldo;
		
	public: //Metodos
		CuentaBancaria(int, string, double); //Constructor
		void getSaldo();
		void getNumeroCuenta();
		void NombreTitular();
		void depositar();
		void retirar();		
};

CuentaBancaria::CuentaBancaria(int _numeroCuenta, string _nombreTitular, double _saldo){
	numeroCuenta = _numeroCuenta;
	nombreTitular = _nombreTitular;
	saldo = _saldo;
}

void CuentaBancaria::getSaldo(){
	
	cout << "Su saldo es de: $" << saldo << endl;
}

void CuentaBancaria::depositar(){
	
	double deposito = 0;
	
	cout << "Cuanto dinero desea depositar?" << endl;
	cin >> deposito;
	
	if (deposito < 0){
		cout << "El deposito no se puede realizar" << endl;
	} else{
		saldo = saldo + deposito;
		cout << "Se realizo el deposito y su saldo es de: $" << saldo << endl; 
	}
}

void CuentaBancaria::getNumeroCuenta(){
	
	cout << "Su numero de cuenta es: " << numeroCuenta << endl;
}

void CuentaBancaria::NombreTitular(){
	
	
	cout << "El nombre del titular de la cuenta es: " << nombreTitular << endl;
}

void CuentaBancaria::retirar(){
	
	double retiro ;

	cout << "¿Cuanto dinero desea retirar?" << endl;
	cin >> retiro;
	
	if (retiro > saldo){
		cout << "El retiro no se pudo realizar: " << endl;
	} else
	{
		saldo = saldo - retiro;
		cout << "El retiro fue realizado con exito" << endl;
	}
}

int main(){
	
	
	int opcion;
	
	CuentaBancaria CuentaDeBanco = CuentaBancaria(232302304, "Alan Reyes", 0);
	
	
do
{
   char respuesta;
   cout << "¿Que accion desea realizar?" << endl;
   cout << "1- Revisar el saldo de mi cuenta bancaria" << endl;
   cout << "2- Ver el numero de mi cuenta bancaria" << endl;
   cout << "3- Ver el nombre del titular de la cuenta" << endl;
   cout << "4- Realizar un deposito" << endl;
   cout << "5- Realizar un retiro de efectivo" << endl;
   cout << "" << endl;
   
   cin >> opcion;
   
   if (opcion < 1 || opcion > 5){
   	
   	cout << "Eliga una opcion correcta" << endl;
   	
   } else{
   	switch(opcion) //donde opción es la variable a comparar
{
    case 1: CuentaDeBanco.getSaldo();
    	break;
    case 2: CuentaDeBanco.NombreTitular();
    	break;
    case 3: CuentaDeBanco.getNumeroCuenta();
    	break;
    case 4: CuentaDeBanco.depositar();
		break;
    default: CuentaDeBanco.retirar();
}
   }
   
   cout << "Desea realizar otra accion? " << endl;
   cin >> respuesta;

}
while(opcion == 'No');
	
	
	return 0;
}
