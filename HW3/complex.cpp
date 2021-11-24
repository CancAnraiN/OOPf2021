#include <cmath>
#include "complex.h"
using std::cout;
using std::endl;

// z = a + bi

// default construct
Complex::Complex(const double rea, const double ima)
{
	re = rea;
	im = ima;
}

// copy constructor
Complex::Complex(const Complex& c)
{
	re = c.re;
	im = c.im;
}

// copy assignment constructor
Complex& Complex::operator=(const Complex& c)
{
	if(this == &c)
		return *this;
	re = c.re;
	im = c.im;
	return *this;
}

// polar = abs*(cos(arg)+i*sin(arg))
Complex Complex::polar(const double leng, const double arg)
{
	re = leng*(cos(arg));
	im = leng*(sin(arg));
	return Complex(re, im);
}

// re = a
double Complex::real()
{
	return re;
}

// im = b
double Complex::imag()
{
	return im;
}

// norm = a^2 - b^2
double Complex::norm()
{
	return pow(re, 2)+pow(im, 2);
}

// abs = sqrt(norm)
double Complex::abs()
{
	return sqrt(norm());
}

// arg = arc tan(abs)
double Complex::arg()
{
	return atan(im / re);
}

// prefix increment
Complex Complex::operator++()
{
	return Complex(re+1, im+1);
}

// postfix increment
Complex Complex::operator++(int)
{
	double temp1 = re++;
	double temp2 = im++;
	return Complex(temp1, temp2);
}

// prefix decrement
Complex Complex::operator--()
{
	return Complex(re-1, im-1);
}

// postfix decrement
Complex Complex::operator--(int)
{
	double temp1 = re--;
	double temp2 = im--;
	return Complex(temp1, temp2);
}

// destructor
Complex::~Complex()
{
	;
}

// calculate polar
Complex polar(const double leng, const double arg)
{
	return Complex(leng*(cos(arg)), leng*(sin(arg)));
}

// calculate norm
double norm(const Complex& x)
{
	Complex temp(x);
	return temp.norm();
}

// calculate absolute
double abs(const Complex& x)
{
	Complex temp(x);
	return temp.abs();
}

// calculate argument
double arg(const Complex& x)
{
	Complex temp(x);
	return temp.arg();
}

// z = x + y
Complex operator+(const Complex& x, const Complex& y)
{
	Complex temp1(x);
	Complex temp2(y);
	return Complex(temp1.real()+temp2.real(), temp1.imag()+temp2.imag());
}

// z = x - y
Complex operator-(const Complex& x, const Complex& y)
{
	Complex temp1(x);
	Complex temp2(y);
	return Complex(temp1.real()-temp2.real(), temp1.imag()-temp2.imag());
}

// z = x * y
Complex operator*(const Complex& x, const Complex& y)
{
	double real_part = (x.re*y.re)-(x.im*y.im);
	double imag_part = (x.re*y.im)+(x.im*y.re);
	return Complex(real_part, imag_part);
}

// z = x / y
Complex operator/(const Complex& x, const Complex& y)
{
	Complex ytemp(y);
	double denominator = ytemp.norm();
	Complex temp(y.re, -y.im);
	return Complex((x*temp).re/denominator, (x*temp).im/denominator);
}

// x = x + y
Complex operator+=(Complex& x, const Complex& y)
{
	x.re = x.re + y.re;
	x.im = x.im + y.im;
	return Complex(x.re, x.im);
}

// x = x - y
Complex operator-=(Complex& x, const Complex& y)
{
	x.re = x.re - y.re;
	x.im = x.im - y.im;
	return Complex(x.re, x.im);
}

// x = x * y
Complex operator*=(Complex& x, const Complex& y)
{
	double temp_x_real = x.re;
	x.re = (x.re*y.re)-(x.im*y.im);
	x.im = (temp_x_real*y.im)+(x.im*y.re);
	return Complex(x.re, x.im);
}

// x = x / y
Complex operator/=(Complex& x, const Complex& y)
{
	Complex ytemp(y);
	double denominator = ytemp.norm();
	Complex mul(x*Complex(y.re, -y.im));
	x.re = (mul).re/denominator;
	x.im = (mul).im/denominator;
	return x;
}

// if x == y
bool operator==(const Complex& x, const Complex& y)
{
	return ((x.re == y.re) && (x.im == y.im));
}

// if x != y
bool operator!=(const Complex& x, const Complex& y)
{
	return ((x.re != y.re) || (x.im != y.im));
}

// print the form of complex x
ostream& operator<<(ostream& o, const Complex& x)
{
	o << "(" << x.re << "," << x.im << ")";
	return o;
}
