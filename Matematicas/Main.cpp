#include <iostream>
#include "CDinamicArray2D.h"
#include "CMatrix2D.h"
using namespace std;

int main(void) {	
	CDinamicArray2D a = CDinamicArray2D(2, 3);
	cout << "Primero el array inicializada a ceros" << endl;
	a.paint();
	cout << "El elemento 2,2 vale: " << a.getElement(2, 2) << endl << endl;

	a.setElement(1, 1, 1);  // inserta fila 1
	a.setElement(1, 2, 2);
	a.setElement(1, 3, 3);

	a.setElement(2, 1, 4); // inserta fila 2
	a.setElement(2, 2, 5);
	a.setElement(2, 3, 6);
	cout << "Ahora la array inicializada " << endl;
	a.paint();
	cout << "El elemento 2,2 vale: " << a.getElement(2, 2) << endl << endl;

	CMatrix2D m = CMatrix2D(1, 6);
	m.paint();
	cout << "Matriz 1,4 vale: " << m.getElement(1, 4) << endl << endl;

	char key; cin >> key;
	return 0;
};

