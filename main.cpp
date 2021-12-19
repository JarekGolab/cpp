#include <iostream>

using namespace std;


//deklaracja zmiennych - liczby do obliczenia
float a = 0, b = 0;

int main(int argc, char** argv) {
		
			//cout to kierowanie polecenia na standartowe wyjœcie (monitor)
		cout << "Podaj pierwsza liczbe: " << endl;
		
			//cin to oczekiwanie na akcjê wejœciow¹ ze standardowego wejœcia - klawiatura
		cin >> a;
		
			//operacje arytmetyczne
		cout << "Podaj druga liczbe: " << endl;
		cin >> b;
		
			float suma = a+b;
			cout << "Suma: " << suma << endl; 
		
			float roznica = a-b;
			cout << "Roznica: " << roznica << endl;
			
			float iloczyn = a*b;
			cout << "Iloczyn: " << iloczyn << endl;
			
			float iloraz = a/b;
			cout << "Iloraz: " << iloraz << endl;
			
			
	return 0;
}
