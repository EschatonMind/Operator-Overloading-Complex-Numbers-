#include "Complex.h"
ostream& operator<<(ostream& out, const Complex& C) {
	out << "( " << C.getreal() << " , " << C.getimag() << " )";
	return out;
}

Complex operator+(const Complex& C1, const Complex& C2) {
	return Complex(C1.getreal() + C2.getreal(), C1.getimag() + C2.getimag());
}

Complex operator+(const Complex& C1, double d) {
	return Complex(C1.getreal() + d, C1.getimag());
}

Complex operator+(double d, const Complex& C1) {
	return Complex(C1.getreal() + d, C1.getimag());
}

Complex::Complex() : real(0), imag(0) {
	cout << " regular constructor called " << endl;
}

Complex::Complex(double real, double imag) {
	this->real = real;
	this->imag = imag;
	cout << " parameterized constructor called " << endl;
}

Complex::Complex(const Complex& other) {
	real = other.real;
	imag = other.imag;
}

const Complex& Complex::operator=(const Complex& other) {
	real = other.real;
	imag = other.imag;
	return *this;
}