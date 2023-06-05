/*

*/

#include <iostream>
using namespace std;

int main() {
	int numero, coppie;
	cout << "quante lettere? ";
	cin >> numero;

	char caratteri[numero], temp;
	cout << "inserire le lettere\n";
	for(int i = 0; i < numero; i++){
		cin >> temp;
		caratteri[i] = temp;
	}
	
	for(int i = 1; i < numero; i++){
		if(caratteri[i-1] == caratteri[i]){
			coppie++;
		}
	}
	
	cout << "ci sono " << coppie << " coppie";

	return 0;
}