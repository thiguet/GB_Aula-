#include <iostream>
#include <math.h>

using namespace std;
 
int main() {	
	const int size = 6;
	// Valor inserido
	double valor;
//	int inteiro, aux, aux1;

    //inteiro = valor;
    //valor = 100*valor;
    //aux1 = valor;
	 
	// Valores Comuns entre Reais e Centavos
	int ReaisCents[size] = {100, 50, 20, 10, 5, 2};

	while(cin >> valor) {
		
		//Forces the float type to int type
		
	    int intValor = round(valor * 100.000000000000000);
		// Notas
		cout << "NOTAS:" << endl;
		for(int i = 0 ; i < size ; i++ ) {
			printf("%i nota(s) de R$ %i.00\n", intValor/(ReaisCents[i] * 100), ReaisCents[i] );
			intValor -= (intValor/(ReaisCents[i] * 100)) * (ReaisCents[i] * 100);  
		}
		
		// 2 reais passa a ser 1 centavo
		ReaisCents[size - 1]--;	
		
		// 2 reais passa a ser 1 centavo
		ReaisCents[2] += 5;	
		
		// Moedas
		cout << "MOEDAS:" << endl;
		for(int i = 0 ; i < size ; i++ ) {
			printf("%i moeda(s) de R$ %.2f\n", intValor/ReaisCents[i], ReaisCents[i] * 0.01 );
			intValor -= intValor/ReaisCents[i] * ReaisCents[i];  
		}

	}
	return 0;
}
