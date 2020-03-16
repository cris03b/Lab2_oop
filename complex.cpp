#include "complex.h"
#include <iostream>
#include <tgmath.h>


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
double Complex::getImaginary() const {
	return imaginar;
}

// setter
void Complex::setImaginary(double imaginar) {
	this->imaginar = imaginar;
}

Complex Complex::Add(Complex y) {
	Complex suma;
	suma.real = real + y.real;
	suma.imaginar = imaginar + y.imaginar;
	return suma;
}

Complex Complex::Mult(Complex y) {
	Complex rezultat;
	rezultat.real = real * y.real - imaginar * y.imaginar;
	rezultat.imaginar = real * y.imaginar + imaginar * y.real;
	return rezultat;
}

Complex Complex::Quot(Complex y) {
	Complex rezultat;
	rezultat.real = (real * y.real + imaginar * y.imaginar) / (y.real * y.real + y.imaginar * y.imaginar);
	rezultat.imaginar = (y.real * imaginar - real * y.imaginar) / (y.real * y.real + y.imaginar * y.imaginar);
	return rezultat;
}

double Complex::Abs() {
	return sqrt(real * real + imaginar * imaginar);
}

double Complex::ComputePolar() {
	return atan(imaginar/real);
}