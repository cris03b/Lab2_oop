// lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "complex.h"
#include "complex.cpp"

Complex Read(Complex x) {
	double a, b;
	std::cout << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	x.setReal(a);
	x.setImaginary(b);
	return x;
}

void Show(Complex x) {
	if (x.getReal() == 0) {
		std::cout << x.getImaginary() << "i";
	}
	else {
		if (x.getImaginary() == 0) {
			std::cout << x.getReal();
		}
		else {
			std::cout << x.getReal() << " + " << x.getImaginary() << "i";
		}
	}
}

void add(Complex x) {
	Complex y, suma;
	y = Read(y);
	Show(x);
	std::cout << " +" << std::endl;
	Show(y);
	std::cout << std::endl << "____" << std::endl;

	suma = x.Add(y);
	Show(suma);
}

void mult(Complex x) {
	Complex y, rezultat;
	y = Read(y);
	Show(x);
	std::cout << " *" << std::endl;
	Show(y);
	std::cout << std::endl << "____" << std::endl;

	rezultat = x.Mult(y);
	Show(rezultat);
}

void quot(Complex x) {
	Complex y, rezultat;
	y = Read(y);
	Show(x);
	std::cout << " :" << std::endl;
	Show(y);
	std::cout << std::endl << "____" << std::endl;

	rezultat = x.Quot(y);
	Show(rezultat);
}

int main()
{
	std::cout << "Ana";
	Complex x, y, suma;
	x = Read(x);
	quot(x);
	system("pause");

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
