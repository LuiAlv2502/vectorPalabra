#include <iostream>
#include "coleccion.h"
using namespace std;

int main() {
	coleccion c1;
	coleccion c2;
	coleccion c3;
	coleccion c4;
	//-------------------------
	c1.insertarLetra('b');
	c1.insertarLetra('e');
	c1.insertarLetra('l');
	c1.insertarLetra('i');
	c1.insertarLetra('e');
	c1.insertarLetra('v');
	c1.insertarLetra('e');
	//-------------------------
	c2.insertarLetra('t');
	c2.insertarLetra('i');
	c2.insertarLetra('e');
	//-------------------------
	c3.insertarLetra('e');
	c3.insertarLetra('m');
	c3.insertarLetra('p');
	c3.insertarLetra('l');
	c3.insertarLetra('o');
	c3.insertarLetra('y');
	//-------------------------
	c4.insertarLetra('c');
	c4.insertarLetra('u');
	c4.insertarLetra('t');

	cout << c1.vocal(3) << " ";
	cout << c1.compararPalabra(c2);
	c1.convertirVerbo();
	c2.convertirVerbo();
	c3.convertirVerbo();
	c4.convertirVerbo();
	cout << c1.toString();
	cout << c2.toString();
	cout << c3.toString();
	cout << c4.toString();
}