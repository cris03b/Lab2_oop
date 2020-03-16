// lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "complex.h"
#include "complex.cpp"

Complex Read(Complex x) {
    double a, b;
    std::cout << "Partea reala: ";
    std::cin >> a;
    std::cout << "Partea imaginara: ";
    std::cin >> b;
    x.setReal(a);
    x.setImaginary(b);
    return x;
}


void add(Complex x) {
    Complex y, suma;
    y = Read(y);
    std::cout << std::endl;
    x.show_compl();
    std::cout << " +" << std::endl;
    y.show_compl();
    std::cout << std::endl << "________" << std::endl;

    suma = x.Add(y);
    suma.show_compl();
    std::cout << std::endl;
}

void mult(Complex x) {
    Complex y, rezultat;
    y = Read(y);
    std::cout << std::endl;
    x.show_compl();
    std::cout << " *" << std::endl;
    y.show_compl();
    std::cout << std::endl << "________" << std::endl;

    rezultat = x.Mult(y);
    rezultat.show_compl();
    std::cout << std::endl;
}

void quot(Complex x) {
    Complex y, rezultat;
    y = Read(y);
    std::cout << std::endl;
    x.show_compl();
    std::cout << " :" << std::endl;
    y.show_compl();
    std::cout << std::endl << "________" << std::endl;

    rezultat = x.Quot(y);
    rezultat.show_compl();
    std::cout << std::endl;
}

void abs(Complex x) {
    double rezultat;
    std::cout << "| ";
    x.show_compl();
    rezultat = x.Abs();
    std::cout << " |" << " = " << rezultat << std::endl;
}



void array() {
    int i, n;
    double real, imaginar;
    Complex array[50], sum;
    std::cout << "Lungime sir: ";
    std::cin >> n;
    while (n < 1) {
        std::cout << "Lungimea trebuie sa fie mai mare decat 0, incercati din nou" << std::endl << "Lungime sir: ";
        std::cin >> n;
    }
    for (i = 0; i < n; i++) {
        std::cout << "Partea reala: ";
        std::cin >> real;
        std::cout << "Partea imaginara: ";
        std::cin >> imaginar;
        array[i].setReal(real);
        array[i].setImaginary(imaginar);

    }
    std::cout << std::endl << "SIR" << std::endl;
    for (i = 0; i < n - 1; i++) {
        array[i].show_compl();
        std::cout << ", ";
        
    }
    array[n - 1].show_compl();
    std::cout << std::endl;

//sort array

    std::cout << std::endl << "SIR SORTAT" << std::endl;
    int sorted = 0;
    while (sorted == 0) {
        sorted = 1;
        for (i = 1; i < n; i++) {
            if (array[i - 1].Abs() > array[i].Abs()) {
                Complex aux = array[i - 1];
                array[i - 1] = array[i];
                array[i] = aux;
                sorted = 0;
            }
        }
    }
    for (i = 0; i < n - 1; i++) {
        array[i].show_compl();
        std::cout << ", ";
    }
    array[n - 1].show_compl();
    std::cout << std::endl;

//sum array
    real = 0;
    imaginar = 0;
    for (i = 0; i < n; i++) {
        real += array[i].getReal();
        imaginar += array[i].getImaginary();
    }
    sum.setReal(real);
    sum.setImaginary(imaginar);
    std::cout << std::endl << "SUMA ELEMENTELOR" << std::endl;
    sum.show_compl();
    std::cout << std::endl;

}

void compute_polar(Complex x) {
    std::cout << x.Abs() << " * (cos(" << x.ComputePolar() << ") + isin(" << x.ComputePolar() << "))\n";
}

int main()
{
  Complex x, y, suma;
    x = Read(x);
    std::cout << std::endl << "FORMA COMPLEXA" << std::endl;
    x.show_compl();
    std::cout << std::endl << std::endl << "FORMA EXPONENTIALA" << std::endl;
    x.show_exp();
    std::cout << std::endl << "FORMA POLARA" << std::endl;
    compute_polar(x);
    std::cout << std::endl << "MODUL" << std::endl;
    abs(x);
    std::cout << std::endl << "ADUNARE" << std::endl;
    add(x);
    std::cout << std::endl << "INMULTIRE" << std::endl;
    mult(x);
    std::cout << std::endl << "IMPARTIRE" << std::endl;
    quot(x);  
    std::cout << std::endl << "SIR DE NUMERE COMPLEXE" << std::endl;
    array();
    std::cout << std::endl << "BYE-BYE! :)" << std::endl;

   return 0;
}
