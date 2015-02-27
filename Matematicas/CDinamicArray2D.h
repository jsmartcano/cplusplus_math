#if !defined(_CDinamicArray2D_)
#define _CDinamicArray2D_

// Declaracion de la clase
class CDinamicArray2D 
{
public:
	CDinamicArray2D(int iRows, int iCols);
	int setElement(int iRow, int iCol, float value);
	float getElement(int iRow, int iCol);
	void paint();
	int getNumRows();
	int getNumCols();
private:
	float **aArray;  // Esto es un puntero que apunta a un objeto de tipo puntero float
	int iRows; 	// Numero de filas
	int iCols;	// Numero de columnas
};

#endif