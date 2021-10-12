/* 	Author; MatheusTGamerPro
	GitHub; github.com/MatheusTGamerPro
	Linguagem; C++
	compilador; Dev-C++
	versão do codigo: 1.0v
*/

# include <iostream>

using namespace std;

// Calculadora em: C++

int main (){
	int value1=0;
	int value2=0;
	
	// Ler Valores do Teclado do usuário...
	
	cout << "\n\n" << "[ Calculadora em C++ ]   ";
	cout << "\n" << "Valor_1: ";
	cin >> value1;
	cout << "\n" << "Valor_2: ";
	cin >> value2;
	cout << "\n" <<"Calculando..." << "\n";
	
	// Calcular Valores do Teclado (usuário)...
	
	int sun1 = value1*value2;
	int sun2 = value1+value2;
	int sun3 = value1-value2;
	int sun4 = value1/value2;
	
	// Somar Os Calculos Efetuados...
	
	cout << "\n" << "[ A Soma de: " << value1 << " x " << value2 << " = " << sun1;
	cout << "\n" << "A Soma de: " << value1 << " + " << value2 << " = " << sun2;
	cout << "\n" << "A Soma de: " << value1 << " - " << value2 << " = " << sun3;
	cout << "\n" << "A Soma de: " << value1 << " / " << value2 << " = " << sun4 << " ]";
	
	// sistema de Loop [ fiz isso na sorte e funcionou :) ]
	
	main();
}
