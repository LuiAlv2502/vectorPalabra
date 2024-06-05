#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class coleccion {
private:
	int tam;
	int cant;
	char v[50];
public:
	coleccion() {
		tam = 50;
		cant = 0;
		for (int i = 0; i < tam; i++) {
			v[i] = '-';
		}
	}
	void insertarLetra(char valor) {
		if (cant < tam) {
			v[cant] = valor;
			cant++;
		}
	}
	void eliminarLetra() {
		v[cant - 1] = '-';
		cant--;
	}
	string toString() {
		stringstream s;
		s << endl << "tamano: " << tam << endl;
		s << "cantidad: " << cant << endl;
		for (int i = 0; i < tam; i++) {
			s << v[i] << ",";
		}
		return s.str();
	}
	bool vocal(int pos) {
		if (v[pos - 1] == 'a' || v[pos - 1] == 'e' || v[pos - 1] == 'i' || v[pos - 1] == 'o' || v[pos - 1] == 'u') {
			return true;
		}
		return false;
	}
	int encontrarVocal() {
		int cantVocales = 0;
		for (int i = 0; i < tam; i++) {
			if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u') {
				cantVocales++;
			}
		}
		return cantVocales;
	}
	bool compararPalabra(coleccion aux) {
		for (int i = 0; i < 50; i++) {
			if (v[i] != aux.v[i]) {
				return false;
			}
		}
		return true;
	}
	void convertirVerbo() {
		int vocales = encontrarVocal();
		if (v[cant - 1] == 'e' && v[cant - 2] != 'i') {
			eliminarLetra();
			insertarLetra('i');
			insertarLetra('n');
			insertarLetra('g');
		}
		else if (v[cant - 1] == 'e' && v[cant - 2] == 'i') {
			for (int i = 0; i < 2; i++) {
				eliminarLetra();
			}
			insertarLetra('y');
			insertarLetra('i');
			insertarLetra('n');
			insertarLetra('g');
		}
		else if (vocales == 1 && vocal(cant) == 0 && vocal(cant - 1) == 1 && vocal(cant - 2) == 0) {
			insertarLetra(v[cant - 1]);
			insertarLetra('i');
			insertarLetra('n');
			insertarLetra('g');
		}
		else if (v[cant - 1] == 'y') {
			insertarLetra('i');
			insertarLetra('n');
			insertarLetra('g');
		}

	}
};