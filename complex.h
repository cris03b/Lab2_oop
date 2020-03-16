#pragma once
class Complex {
private:
	double real;
	double imaginar;
	

public:

	Complex(double real, double imaginar);
	Complex();
	~Complex();
	
	double getReal() const;
	void setReal(double real);
	double getImaginary() const;
	void setImaginary(double imaginar);
	
	
	void show_compl();
	void show_exp();
	Complex operator+ (Complex y);
	Complex operator* (Complex x);
	Complex operator/ (Complex x);
	double Abs();
	double ComputePolar();
};