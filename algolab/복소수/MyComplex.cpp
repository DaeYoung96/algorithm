#include "MyComplex.h"
// Constructor
myComplex::myComplex(int real, int imag)
{
	realPart = real;
	imaginaryPart = imag;
}
// Copy constructor
myComplex::myComplex(const myComplex& number)
{
	realPart = number.realPart;
	imaginaryPart = number.imaginaryPart;
}
// Accessor functions
int myComplex::getRealPart() const
{
	return realPart;
}
int myComplex::getImaginaryPart() const
{
	return imaginaryPart;
}
// Mutator functions
void myComplex::setRealPart(int real)
{
	realPart = real;
}
void myComplex::setImaginaryPart(int imag)
{
	imaginaryPart = imag;
}
void myComplex::set(int real, int imag)
{
	realPart = real;
	imaginaryPart = imag;
}
// Overloaded binary operators
myComplex myComplex::operator +(const myComplex& number) const
{
	int newReal = realPart + number.realPart;
	int newImag = imaginaryPart + number.imaginaryPart;
	return myComplex(newReal, newImag);
}
myComplex myComplex::operator +(int value) const
{

	return myComplex(value) + (*this);
}

myComplex myComplex::operator -(const myComplex& number) const
{
	int newReal = realPart - number.realPart;
	int newImag = imaginaryPart - number.imaginaryPart;
	return myComplex(newReal, newImag);
}
myComplex myComplex::operator -(int value) const
{
	return (*this) - myComplex(value);
}

myComplex myComplex::operator *(const myComplex& number) const
{
	int newReal = realPart * number.realPart - imaginaryPart * number.imaginaryPart;
	int newImag = realPart*number.imaginaryPart + imaginaryPart*number.realPart;
	return myComplex(newReal, newImag);
}
myComplex myComplex::operator *(int value) const
{
	return myComplex(realPart*value, imaginaryPart*value);
}

myComplex myComplex::operator +=(const myComplex& number)
{
	this->realPart += number.realPart;
	this->imaginaryPart += number.imaginaryPart;
	return *this;
}
myComplex myComplex::operator -=(const myComplex& number)
{
	this->realPart -= number.realPart;
	this->imaginaryPart -= number.imaginaryPart;
	return *this;
}
myComplex myComplex::operator *=(const myComplex& number)
{
	int newrealPart = (realPart * number.realPart) - (imaginaryPart * number.imaginaryPart);
	int newimaginaryPart = (realPart * number.imaginaryPart) + (imaginaryPart * number.realPart);
	this->realPart = newrealPart;
	this->imaginaryPart = newimaginaryPart;
	return *this;
}
myComplex myComplex::operator +=(int value)
{
	this->realPart = realPart + value;
	return *this;
}
myComplex myComplex::operator -=(int value)
{
	this->realPart = realPart - value;
	return *this;
}
myComplex myComplex::operator *=(int value)
{
	this->realPart = realPart * value;
	this->imaginaryPart = imaginaryPart * value;
	return *this;
}

// Assignment operators
myComplex& myComplex::operator =(const myComplex& number)
{
	this->realPart = number.realPart;
	this->imaginaryPart = number.imaginaryPart;
	return *this;
}
myComplex& myComplex::operator =(int value)
{
	realPart = value;
	imaginaryPart = 0;
	return *this;
}

// Overloading comparison operators
bool myComplex::operator ==(const myComplex& number) const
{
	return (realPart == number.realPart) &&
		(imaginaryPart == number.imaginaryPart);
}
bool myComplex::operator !=(const myComplex& number) const
{
	return (realPart != number.realPart) ||
		(imaginaryPart != number.imaginaryPart);
}
bool myComplex::operator >(const myComplex& number) const
{
	return norm() > number.norm();
}
bool myComplex::operator >=(const myComplex& number) const
{
	return norm() >= number.norm();
}
bool myComplex::operator <(const myComplex& number) const
{
	return norm() < number.norm();
}
bool myComplex::operator <=(const myComplex& number) const
{
	return norm() <= number.norm();
}

// Overloaded unary operators
myComplex myComplex::operator -() // unary minus
{
	return myComplex(-realPart, -imaginaryPart);
}
myComplex myComplex::operator ++() //전위 연산자
{
	++this->realPart;
	return *this;
}
myComplex myComplex::operator ++(int) //후위 연산자
{
	myComplex tmp = *this;
	++(*this);
	return tmp;
}
myComplex myComplex::operator --() //전위 연산자
{
	--this->realPart;
	return *this;;
}
myComplex myComplex::operator --(int) //후위 연산자
{
	myComplex tmp = *this;
	--(*this);
	return tmp;
}
myComplex myComplex::operator ~() //후위 연산자
{
	this->imaginaryPart = this->imaginaryPart * -1;
	return *this;
}
// private function
int myComplex::norm() const
{
	return realPart * realPart + imaginaryPart * imaginaryPart;
}

//friend function
ostream &operator <<(ostream &outStream, const myComplex& number)
{
	outStream << "(" << number.getRealPart() << "," << number.getImaginaryPart() << ")";
	return outStream;
}
istream &operator >>(istream &inStream, myComplex& number)
{
	inStream >> number.realPart >> number.imaginaryPart;
	return inStream;
}
myComplex operator +(int value, const myComplex& number)
{
	return myComplex(value + number.realPart, number.imaginaryPart);
}
myComplex operator -(int value, const myComplex& number)
{
	return myComplex(value - number.realPart, number.imaginaryPart * -1);
}
myComplex operator *(int value, const myComplex& number)
{
	return myComplex(value * number.realPart, value * number.imaginaryPart);

}