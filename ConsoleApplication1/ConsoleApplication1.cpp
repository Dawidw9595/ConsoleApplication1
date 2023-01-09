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
	float c;
	float y;
	cout << " Oblilczanie miejsc zerowych funkcji ax+b" << endl << endl;
	cout << "Podaj a gdzie" << endl;
	cin >> a;
	cout << "Podaj b" << endl;
	cin >> b;
	cout << "podaj c" << endl;
	cin >> c;
	

	
	if (a == 0) {
		cout << "Miejsce zerowe to " << b;

	}
	else {
		b = -b;
		x = a / b;
		c = c / b;
		c = -c;
		y = x / c;
		cout << "Miejsce zerowe funkcji ax+b to " << x << endl;
		cout << "Miejsce zerowe funkcji ax + by + c to " << y << endl;

	}

	cout << endl;

  

}

