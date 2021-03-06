#include "complex.h"
#include <iostream>
#include <cmath>




Complex::Complex() {
	real = 0;
	imaginar = 0;
}

Complex::Complex(double real, double imaginar) {
	this->real = real;
	this->imaginar = imaginar;
}

Complex::~Complex() {

}

// getter
double Complex::getReal() const {
	return real;
}

// setter
void Complex::setReal(double real) {
	this->real = real;
}

// getter
double Complex::getImaginary() const{
	return imaginar;
}

// setter
void Complex::setImaginary(double imaginar) {
	this->imaginar = imaginar;
}


void Complex::show_compl() {
	if (real == 0) {
		std::cout << imaginar << "i";
	}
	else {
		if (imaginar == 0) {
			std::cout << real;
		}
		else {
			std::cout << real << " + " << imaginar << "i";
		}
	}
}

void Complex::show_exp() {
	double r = Abs();
	double phi = ComputePolar();
	std::cout << r << " * e^(" << phi << "i)" << std::endl;
}

Complex Complex::operator+ (Complex y) {
	Complex suma;
	suma.real = real + y.real;
	suma.imaginar = imaginar + y.imaginar;
	return suma;
}

Complex Complex::operator* (Complex y) {
	Complex rezultat;
	rezultat.real = real * y.real - imaginar * y.imaginar;
	rezultat.imaginar = real * y.imaginar + imaginar * y.real;
	return rezultat;
}

Complex Complex::operator/ (Complex y) {
	Complex rezultat;
	rezultat.real = (real * y.real + imaginar * y.imaginar) / (y.real * y.real + y.imaginar * y.imaginar);
	rezultat.imaginar = (y.real * imaginar - real * y.imaginar) / (y.real * y.real + y.imaginar * y.imaginar);
	return rezultat;
}


double Complex::Abs() {
	return sqrt(real * real + imaginar * imaginar);
}

double Complex::ComputePolar() {
	return atan(imaginar / real);
}