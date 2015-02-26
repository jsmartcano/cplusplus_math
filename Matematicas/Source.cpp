#include <iostream>
using namespace std;

// Declaracion de la clase
class CDinamicArray2D {
	public:
		CDinamicArray2D(int iRows, int iCols);
		int insertElement(int iRow, int iCol, float value);
		void paint();
	private:
		float **aArray = NULL;  // Esto es un puntero que apunta a un objeto de tipo puntero float
		int iRows = NULL;	// Numero de filas
		int iCols = NULL;	// Numero de columnas
};

// Constructor, recibiendo un numero filas y de columnas
CDinamicArray2D::CDinamicArray2D(int iRows, int iCols) {
	aArray = new float*[iRows - 1];
	for (int i = 0; i < iRows; i++) {
		aArray[i] = new float[iCols - 1];
		for (int j = 0; j < iCols; j++) {
			aArray[i][j] = 0;
		};
	};
	this->iRows = iRows;   // Se guarda el numero de filas y columnas para otras operaciones
	this->iCols = iCols;   // hay que usar this para no confundir con los parametros
};

// Insertar elemento fValue en una fila y columna
int CDinamicArray2D::insertElement(int iRow, int iCol, float fValue) {
	aArray[iRow-1][iCol-1]=fValue;
	return 0;
};

// Dibujar el array en pantalla
void CDinamicArray2D::paint() {
	for (int i = 0; i < iRows; i++){
		for (int j = 0; j < iCols; j++) {
			cout << aArray[i][j] << " ";
		};
		cout << endl;
	};
}


int main() {	
	CDinamicArray2D a = CDinamicArray2D(2, 3);
	cout << "Primero la array inicializada a ceros" << endl;
	a.paint();
	a.insertElement(1, 1, 1);  // inserta fila 1
	a.insertElement(1, 2, 2); 
	a.insertElement(1, 3, 3);

	a.insertElement(2, 1, 4); // inserta fila 2
	a.insertElement(2, 2, 5);
	a.insertElement(2, 3, 6);
	cout << "Ahora la array inicializada " << endl;
	a.paint();
	char key; cin >> key;
	return 0;
};

