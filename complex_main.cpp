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
            std::cout << x.getReal() << " + " << x.getImaginary() << "i" ;
        }
    }
}


void add(Complex x) {
    Complex y, suma;
    y = Read(y);
    Show(x);
    std::cout << " +" << std::endl;
    Show(y);
    std::cout << std::endl << "________" << std::endl;

    suma = x.Add(y);
    Show(suma);
}

void mult(Complex x) {
    Complex y, rezultat;
    y = Read(y);
    Show(x);
    std::cout << " *" << std::endl;
    Show(y);
    std::cout << std::endl << "________" << std::endl;

    rezultat = x.Mult(y);
    Show(rezultat);
}

void quot(Complex x) {
    Complex y, rezultat;
    y = Read(y);
    Show(x);
    std::cout << " :" << std::endl;
    Show(y);
    std::cout << std::endl << "________" << std::endl;

    rezultat = x.Quot(y);
    Show(rezultat);
}

void abs(Complex x) {
    Show(x);
    std::cout << std::endl << x.Abs() << std::endl;
}

void compute_polar(Complex x) {
    std::cout << x.Abs() << "*(cos(" << x.ComputePolar() << ") + isin(" << x.ComputePolar() << "))\n";
}

void array() {
    int i, n;
    double real, imaginar;
    Complex array[50], sum;
    std::cout << "length: ";
    std::cin >> n;
    for (i = 0; i < n; i++) {
        std::cout << "a: ";
        std::cin >> real;
        std::cout << "b: ";
        std::cin >> imaginar;
        array[i].setReal(real);
        array[i].setImaginary(imaginar);

    }
    for (i = 0; i < n - 1; i++) {
        Show(array[i]);
        std::cout << ", ";
        
    }
    Show(array[n - 1]);

//sort array

    std::cout << std::endl << "Sorted array: " << std::endl;
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
        Show(array[i]);
        std::cout << ", ";
    }
    Show(array[n - 1]);

//sum array
    real = 0;
    imaginar = 0;
    for (i = 0; i < n; i++) {
        real += array[i].getReal();
        imaginar += array[i].getImaginary();
    }
    sum.setReal(real);
    sum.setImaginary(imaginar);
    std::cout << std::endl;
    Show(sum);

}

int main()
{
  Complex x, y, suma;
    x = Read(x);
    /*abs(x);
    std::cout << std::endl;*/
    compute_polar(x);

   return 0;
}
