#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {

	std:string vs_opcion = "";
	int vi_opcion  = 1;
	float vf_area  = 0;
	bool vb_opcion = false;

	int vi_base=0;
        int vi_altura = 0;
	int vi_radio = 0;

	cout << "+-------------------------------------------------------------+\n";
	cout << "|   Programa para calcular el area de una figura geometrica   |\n";
	cout << "|   Realizado por Harold Adrian Bolaños Rodriguez             |\n";
	cout << "|   9/SEP 2021. Universidad Cooperativa de Colombia           |\n";
	cout << "+-------------------------------------------------------------|\n";
	cout << "\n";

	cout << "Seleccionar una opcion geometrica para calcular el area\n";
	cout << "Circulo   [1] por defecto\n";
	cout << "Triangulo [2] \n";
	cout << "Cuadrado  [3] \n";
	cout << "[1] :";
	cin >> vi_opcion;

	cout << "Usted ingreso: " << vi_opcion << endl;

	if (vi_opcion < 1 ){
		vi_opcion = 1;
		vb_opcion = true;
	}else if (vi_opcion > 3 ){
		vi_opcion = 1;
		vb_opcion = true;
	}

	if (vb_opcion) {
		cout << "ingreso una opcion fuera de rango, se asigna por defecto 1\n";
	}

	switch(vi_opcion) {
	  case 1:
    	    // Circulo
	    cout << "Ingrese el Radio del circulo : ";
	    cin >> vi_radio;
	    cout << "\n";
	    vf_area = (vi_radio * vi_radio) * 3.14151692;
	    break;
	  case 2:
	    // Triangulo
	    cout << "Ingrese la altura : ";
	    cin >> vi_altura;
	    cout << "\n";

	    cout << "Ingrese la base : ";
            cin >> vi_base;
            cout << "\n";

	    vf_area = (vi_base * vi_altura) / 2;
	    break;
	  default:
	    // Cuadrado
	    cout << "Ingrese longitud de la base : ";
            cin >> vi_base;
            cout << "\n";

	    vf_area = vi_base * vi_base;
            break;
	}

	cout << "La area es: " << vf_area << endl; 

	return 0;
}
