// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
	//Napisz program obliczania miejsc zerowych funkcji liniowej postaci ax + b gdzie a≠0 (wer.1.0) 
	float a;
	float b;
	float negb;
	float w;
	float x;
	float c;
	float y;
	float delta;
	float x1;
	float x2;
	int przypadek;
	
	cout << "Program obliczania miejsc zerowych fyunkcji" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "Wybierz funkcję do obliczenia" << endl;
	cout << "1. ax+b" << endl;
	cout << "2. Ax+By+C" << endl;
	cout << "3. ax^2+bx+c" << endl;
	cout << "Chce obliczyć miejsce zerower funkcji: ";
	cin >> przypadek;
	switch (przypadek)
	{
	case 1:
		cout << "Podaj a gdzie" << endl;
		cin >> a;
		cout << "Podaj b" << endl;
		cin >> b;
		if (a == 0) {
			cout << "Miejsce zerowe to " << b;

		}
		else {
			if (b == 0)
			{
				cout << "równanie sprzeczne dla tej funckji" << endl;
			}
			else
			{
				b = -b;
				x = a / b;
				cout << "Miejsce zerowe funkcji ax+b to " << x << endl;
			}
			
		}
		break;
	case 2:
		break;
	case 3:
		break;


	default:
		break;
	}


/*
	cout << " Oblilczanie miejsc zerowych funkcji ax+b, ax+by+c, ax^2+bx+c gdzie a=!0" << endl << endl;
	
	cout << "podaj c" << endl;
	cin >> c;
	

	
	
	else {
		if (b == 0) {
			cout << "rownanie sprzeczne dla ax+b " << endl;
			negb = -c;
			y = a / negb;
			cout << "Miejsce zerowe funkcji ax + by + c to " << y << endl;
		}
		else {

			if (c == 0) {
				negb = -b;
				x = a / negb;
				cout << "Miejsce zerowe funkcji ax^2 + bx + c to " << x << endl;
				cout << "Miejsce zerowe funkcji ax+b to " << x << endl;
			}
			else{
			negb = -b;
			x = a / negb;
			cout << "Miejsce zerowe funkcji ax+b to " << x << endl;

		w = c / negb;
		w = -w;
		y = x / w;
		cout << "Miejsce zerowe funkcji ax + by + c to " << y << endl;



		cout << "Miejsce zerowe funkcji ax^2 + bx + c to " << y << endl;

	}
	}
	}
	*/
}

