#include <iostream>
#include "CDinamicArray2D.h"
using namespace std;

// Constructor, recibiendo un numero filas y de columnas
CDinamicArray2D::CDinamicArray2D(int iRows, int iCols) {
	aArray = new float *[iRows];
	for (int i = 0; i < iRows; i++) {
		aArray[i] = new float[iCols];
		for (int j = 0; j < iCols; j++) {
			aArray[i][j] = 0;
		};
	};
	this->iRows = iRows;   // Se guarda el numero de filas y columnas para otras operaciones
	this->iCols = iCols;   // hay que usar this para no confundir con los parametros
};

// Insertar elemento fValue en una fila y columna
int CDinamicArray2D::setElement(int iRow, int iCol, float fValue) {
	aArray[iRow - 1][iCol - 1] = fValue;
	return 0;
};

// Extraer un elemento
float CDinamicArray2D::getElement(int iRow, int iCol){
	return aArray[iRow - 1][iCol - 1];
};

// Dibujar el array en pantalla
void CDinamicArray2D::paint() {
	for (int i = 0; i < iRows; i++){
		for (int j = 0; j < iCols; j++) {
			cout << aArray[i][j] << " ";
		};
		cout << endl;
	};
};

int CDinamicArray2D::getNumRows() {
	return this->iRows;
}

int CDinamicArray2D::getNumCols() {
	return this->iCols;
}

CDinamicArray2D::~CDinamicArray2D() {
	for (int i = 0; i < iRows; i++) {
		delete[] aArray[i];
	};
	delete[] aArray;
}

