#include <iostream>
#include <string>

using namespace std;
class CuentaBancaria{
	private:
		string numeroCuenta;
		string nombreTitular;
		double saldo;
	public:
		CuentaBancaria(string num, string titular, double saldo);
		double getSaldo();
		string getNumeroCuenta();
		string getNombretitular();
		void depositar(double importeDeposito);
		void retirar(double importeRetiro);		
};

CuentaBancaria::CuentaBancaria(string num, string titular, double saldo){
	if (saldo<0){this->saldo=0.00;
	}else {this->saldo=saldo;
	}
	this->numeroCuenta=num;
	this->nombreTitular=titular;
}

double CuentaBancaria::getSaldo(){return this->saldo;
}

string CuentaBancaria::getNumeroCuenta(){
	return this->numeroCuenta;
}

string CuentaBancaria::getNombretitular(){
	return this->nombreTitular;
}
void CuentaBancaria::retirar(double importeRetiro){
	if(importeRetiro > 0 && importeRetiro <= this->saldo){
		this->saldo-=importeRetiro;
	}else{cout <<"! - importe no valido"<< endl;
	}
}
