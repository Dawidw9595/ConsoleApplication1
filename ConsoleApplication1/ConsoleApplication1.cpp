// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");
	//Napisz program obliczania miejsc zerowych funkcji liniowej postaci ax + b gdzie a≠0 (wer.1.0) 
	float a;
	float b;
	float x;
	float c;
	float delta=0;
	float pierwiastek = 0;
	float x1=0;
	float x2=0;
	int i = 0;
	int przypadek=0;

	cout << "Program obliczania miejsc zerowych fyunkcji" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "Wybierz funkcję do obliczenia" << endl;
	cout << "1. ax+b" << endl;
	cout << "2. Ax+By+C" << endl;
	cout << "3. ax^2+bx+c" << endl;
	cout << "4. Y=a(x-p)^2+q" << endl;
	cout << "Chce obliczyć miejsce zerower funkcji: ";
	while(przypadek==0){
	cin >> przypadek;
	switch (przypadek)
	{
	case 1:
		cout << "Podaj a" << endl;
		cin >> a;
		cout << "Podaj b" << endl;
		cin >> b;
		if (a == 0) {
			cout << "Brak miejsc zerowych" << b;

		}
		else {
			if (b == 0)
			{
				cout << "Rownanie sprzeczne dla tej funkcji" << endl;
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
		cout << "Podaj a" << endl;
		cin >> a;
		cout << "Podaj b" << endl;
		cin >> b;
		cout << "podaj c" << endl;
		cin >> c;
		if (a == 0) {

			cout << "Funkcja nie posiada miejsc zerowych " << endl;

		}
		else {
			if (b == 0) {
				b = -c;
				x = a / b;
				cout << "Miejsce zerowe funkcji ax + by + c to " << x << endl;
			}
			else {

				if (c == 0) {
					b = -b;
					x = a / b;
					cout << "Miejsce zerowe funkcji ax + bx + c to " << x << endl;
				}
				else {
					b = -b;
					a = a / b;
					c = c / b;
					c = -c;
					x = a / c;
					cout << "Miejsce zerowe funkcji ax + by + c to " << x << endl;
				}
				break;
	case 3:
		cout << "Podaj a" << endl;
		cin >> a;
		cout << "Podaj b" << endl;
		cin >> b;
		cout << "podaj c" << endl;
		cin >> c;
		if (a == 0) {
			delta = b * b;
			x1 = 0;
			x2 = 0;
			cout << "Delta wynosi: " << delta << endl << "x1 wynosi: " << x1 << endl << "x2 wyosi: " << x2 << endl;
		}
		else{
		if (b == 0) {
			delta = -4 * a * c;
			if (delta < 0)
			{
				cout << "Delta wynosi: " << delta << endl << "To równanie kwadratowe nie ma rozwiązań" << endl;
			}
			else
			{
				if (delta == 0) {
					x1 = -b / (2 * a);
					cout << "delta wynosi: " << delta << "to równanie kwadratowe ma jedno rozwiązanie: " << x1 << endl;
				}else{
				x1 = (-b + sqrt(delta)) / (2 * a);
				x2 = (-b - sqrt(delta)) / (2 * a);
				cout << "Delta wynosi: " << delta << endl << "x1 wynosi: " << x1 << endl << "x2 wyosi: " << x2 << endl;
				}
			}
		}
		else
		{
			if (c == 0) {
				delta = b * b;
				if (delta < 0)
				{
					cout << "Delta wynosi: " << delta << endl << " to równanie kwadratowe nie ma rozwiązań" << endl;
				}
				else
				{
					if (delta == 0) {
						x1 = -b / (2 * a);
						cout << "delta wynosi: " << delta << "to równanie kwadratowe ma jedno rozwiązanie: " << x1 << endl;
					}
					else {
						x1 = (-b + sqrt(delta)) / (2 * a);
						x2 = (-b - sqrt(delta)) / (2 * a);
						cout << "Delta wynosi: " << delta << endl << "x1 wynosi: " << x1 << endl << "x2 wyosi: " << x2 << endl;
					}
				}
			}
			else {
				delta = (b * b) - (4*a*c);
				if (delta < 0)
				{
					cout << "Delta wynosi: " << delta << endl << " to równanie kwadratowe nie ma rozwiązań" << endl;
				}
				else
				{
					if (delta == 0) {
						x1 = -b / (2 * a);
						cout << "delta wynosi: " << delta << "to równanie kwadratowe ma jedno rozwiązanie: " << x1 << endl;
					}
					else {
						x1 = (-b + sqrt(delta)) / (2 * a);
						x2 = (-b - sqrt(delta)) / (2 * a);
						cout << "Delta wynosi: " << delta << endl << "x1 wynosi: " << x1 << endl << "x2 wyosi: " << x2 << endl;
					}
				}
			}
		}
		}
		break;


	default:
		cout << "Nie wybrałeś, wybierz coś" << endl;
		i++;

		break;
			}

		}
	}
		/*
			cout << " Oblilczanie miejsc zerowych funkcji ax+b, ax+by+c, ax^2+bx+c gdzie a=!0" << endl << endl;

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
}
