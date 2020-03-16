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
	Complex Add(Complex y);
	Complex Mult(Complex x);
	Complex Quot(Complex x);
	double Abs();
	double ComputePolar();
};