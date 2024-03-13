#include <iostream>
#include "Pila.h"

using namespace std;

//template <typename T>
template <class T>
T sumar(T a, T b) {
	return a + b;
}

template <class T, class U>
class A {
public:
	T a;
	T b;
	U c;
	U d;
	A(T _a, T _b) : a(_a), b(_b) {
		//a = _a;
		//b = _b;

	}
	T sumar() {
		return a + b;
	}

	U restar() {
		return c - d;
	}

};

int main() {
	//A<int, float> pa(10, 40);
	//cout << pa.sumar() << endl;

	Pila<string> pila(5);
	pila.push("juan");
	pila.push("pedro");
	pila.push("pablo");
	pila.push("mateo");
	pila.push("marcos");
	pila.push("judas");

	pila.imprimir();

	//pila.pop();

	//pila.imprimir();

	/*cout << sumar<string>(string("Jose "), string("Luis")) << endl;
	cout << sumar<int>(10, 23) << endl;
	cout << sumar<float>(12.5f, 16.9f) << endl;*/
	return 0;
}