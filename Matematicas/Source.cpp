#include <iostream>
using namespace std;

// Declaracion de la clase
class CDinamicArray2D {
	public:
		CDinamicArray2D(int iRows, int iCols);
		int setElement(int iRow, int iCol, float value);
		float getElement(int iRow, int iCol);
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
int CDinamicArray2D::setElement(int iRow, int iCol, float fValue) {
	aArray[iRow-1][iCol-1]=fValue;
	return 0;
};

// Extraer un elemento
float CDinamicArray2D::getElement(int iRow, int iCol){
	return aArray[iRow-1][iCol-1];
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


int main() {	
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
	cout << "El elemento 2,2 vale: " << a.getElement(2, 2) << endl;
	char key; cin >> key;
	return 0;
};

