#include"COMPLEX.h"
    




ComplexMain::ComplexMain(double re, double im)
{
	    this->re;
		this->im;
}

ComplexMain::~ComplexMain()
{}
Complex Complex::operator+(Complex b) 
{
	Complex a = *this, result;
	result.re = a.re + b.re;
	result.im = a.im + b.im;
	return result;
}
Complex Complex::operator-(Complex b) 
{
	Complex a = *this, result;
	result.re = a.re - b.re;
	result.im = a.im - b.im;
	return result;
}
Complex Complex::operator*(Complex b) 
{
	Complex a = *this, result;
	result.re = a.re * b.re - a.im * b.im;
	result.im = a.re * b.im + a.im * b.re;
	return result;
}
Complex Complex::operator/(Complex b)
{
	Complex a = *this;
	double x1, x2, x3;
	x1 = (a.re * b.re) + (a.im * b.im);
	x2 = (b.re * a.im) - (a.re * b.im);
	x3 = (b.re * b.re) + (b.im * b.im);

	if (x2 > 0) {
		cout << "Result division: " << x1 << "/" << x3 << "+" << x2 << "/" << x3 << "i";
	}
	else
		cout << "Result division: " << x1 << "/" << x3 << x2 << "/" << x3 << "i";
	cout << endl;
	return a;
}
istream &operator>>(istream &in, Complex &c) {
	cout << "Enter Real part: ";
	in >> c.re;
	cout << "Enter Imag part: ";
	in >> c.im;
	return in;
}
ostream &operator<<(ostream &out, Complex &c)
{
	if (c.im < 0)
		out << c.re << "+i(" << c.im << ")" << endl;
	else
		out << c.re << "+" << c.im << "i" << endl;
	return out;
}
void Complex::menu()
{
	cout << "   [+] Add\n" <<
		"   [-]   Sub\n" <<
		"   [*]   Multiplay\n" <<
		"   [/]   Div\n" <<
		"Select operation:";
}
void Complex::EnterOperation(Complex a, Complex b)
{
	Complex result;
	char select;
	cin >> select;
	switch (select) {
	case '+': {
		result = a + b;
		cout << result;
	}
			  break;
	case '-': {
		result = a - b;
		cout << result;
	}
			  break;
	case '*': {
		result = a * b;
		cout << result;
	}
			  break;
	case '/': {
		result = a / b;
	}
			  break;
	default: {
		cout << select<<"---Unknown action" << endl;
		break;
	}
	}
}
