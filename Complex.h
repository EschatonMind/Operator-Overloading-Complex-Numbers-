#pragma once
#include<iostream>
using namespace std;
class Complex
{

private:
	double real;
	double imag;

public:
	Complex();
	Complex(double real, double image);
	Complex(const Complex& other); // we need copy constructor esince we are overloading operators
	const Complex& operator=(const Complex& other);

	// getters should be const since they don't change the input object type used in overloading functions
	double getreal() const {
		return real;
	}

	double getimag() const {
		return imag;
	}

	friend Complex operator+(const Complex& C1, const Complex& C2);
	friend Complex operator+(const Complex& C1, double d);
	friend Complex operator+(double d, const Complex& C1);
};

ostream& operator<<(ostream& out, const Complex& C); // overloading " << " from " ostream " since the object type of " Complex " should not be changed we declare it as " const "
