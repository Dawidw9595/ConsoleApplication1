// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
	//Napisz program obliczania miejsc zerowych funkcji liniowej postaci ax + b gdzie a≠0 (wer.1.0) 
	float a;
	float b;
	float x;
	cout << " Oblilczanie miejsc zerowych funkcji ax+b" << endl << endl;
	cout << "Podaj a gdzie a!=0" << endl;

	cin >> a;
	cout << "Podaj b" << endl;
	cin >> b;
	if (a == 0) {
		cout << "Miejsce zetowe to " << b;

	}
	else {
		b = -b;
		x = a / b;

		cout << "Miejsce zerowe to " << x << endl;
	}

}

