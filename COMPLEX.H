#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
#include<cmath>
#include<string>


using namespace std;


class ComplexMain
{
protected:
	double re;
	double im;
	
public:
	ComplexMain() : re(0.0), im(0.0)
	{}
	~ComplexMain();
	ComplexMain(double re, double im);
	void setRe(double re) {
		this->re = re;
	}
	void setIm(double im) {
		this->im = im;
	}
	double getRe() {
		return re;
	}
	double getIm() {
		return im;
	}

};

class Complex :public ComplexMain
{
public:

	Complex operator+(Complex b);
	Complex operator-(Complex b);
	Complex operator*(Complex b);
	Complex operator/(Complex b);
	friend ostream &operator<<(ostream &, Complex &);
	friend istream &operator>>(istream &, Complex &);
	void menu();
	void EnterOperation(Complex a, Complex b);
};

#endif 

