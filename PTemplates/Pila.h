#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Pila
{
private:
	T* pila;
	int tope;
	int tamano;
public:
	Pila(int _tamano);
	~Pila();
	void push(T dato);
	T pop();
	int getTope();
	bool estaVacia();
	bool estaLlena();
	void imprimir();
};

template<typename T>
inline Pila<T>::Pila(int _tamano)
{
	tamano = _tamano;
	pila = new T[tamano];
	tope = -1;
}

template<typename T>
inline Pila<T>::~Pila()
{
	delete[] pila;
}

template<typename T>
inline void Pila<T>::push(T dato)
{
	if (!estaLlena())
	{
		tope++;
		pila[tope] = dato;
	}
	else
	{
		cout << "La pila esta llena" << endl;
	}
}

template<typename T>
inline T Pila<T>::pop()
{
	if (!estaVacia())
	{
		T dato = pila[tope];
		tope--;
		return dato;
	}
	else
	{
		cout << "La pila esta vacia" << endl;
	}

}

template<typename T>
inline int Pila<T>::getTope()
{
	return tope;
}

template<typename T>
inline bool Pila<T>::estaVacia()
{
	if (tope >= 0) {
		return true;
	}
	return false;
}

template<typename T>
inline bool Pila<T>::estaLlena()
{
	if (tope >= tamano - 1)
	{
		return true;
	}
	return false;
}

template<typename T>
inline void Pila<T>::imprimir()
{
	for (int i = 0; i <= tope; i++)
	{
		cout << pila[i] << " ";
	}
	cout << endl;
}
