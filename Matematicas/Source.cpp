#include <iostream> 
using namespace std;

class Matriz {
	public:
		Matriz(int filas, int columnas);
	private:
		float aEntradas[];


};

Matriz::Matriz(int filas, int columnas) {
	aEntradas[1][1]=1;
};

int main() {
	int iTecla;
	cin >> iTecla; 
	return 0;
};