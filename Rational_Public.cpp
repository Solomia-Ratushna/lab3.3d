//Rational-Public.cpp
#include "Rational_Public.h"
Rational_Public::Rational_Public() : Pair(0, 0) {}
Rational_Public::Rational_Public(double first = 0, double second = 0) : Pair(first, second) {}
Rational_Public::Rational_Public(Rational_Public& A) : Pair(A.GetFirst(), A.GetSecond()) {}

Rational_Public& Rational_Public::operator = (const Rational_Public& A)
{
	this->SetFirst(A.GetFirst());
	this->SetSecond(A.GetSecond());

	return *this;
}
ostream& operator << (ostream& out, const Rational_Public& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Rational_Public& A)
{
	double first, second;
	cout << "Enter a first number: "; in >> first;
	cout << "Enter a second number: "; in >> second;
	A.SetFirst(first); A.SetSecond(second);
	return in;
}
Rational_Public::operator string() const
{
	stringstream ss;
	ss << "First number of pair is equal to " << this->GetFirst() << endl;
	ss << "Second number of pair is equal to " << this->GetSecond() << endl;
	return ss.str();
}

int Rational_Public::ComparePairs(const Pair p1, const Pair p2) const
{
	if (p1 > p2)
		return 1;
	if (p1 < p2)
		return 2;
	if (p1 == p2)
		return 3;
}
void Rational_Public::ComparePairsResult(int result)
{
	switch (result)
	{
	case 1:
		cout << "\nP1 > P2" << endl;
		break;
	case 2:
		cout << "\nP1 < P2" << endl;
		break;
	case 3:
		cout << "\nP1 = P2" << endl;
		break;
	}
}

Rational_Public& Rational_Public::operator ++ ()
{
	this->SetFirst(this->GetFirst() + 1);
	return *this;
}
Rational_Public& Rational_Public::operator -- ()
{
	this->SetFirst(this->GetFirst() - 1);
	return *this;
}
Rational_Public Rational_Public::operator ++ (int)
{
	Rational_Public t(*this);
	this->SetSecond(this->GetSecond() + 1);
	return t;
}
Rational_Public Rational_Public::operator -- (int)
{
	Rational_Public t(*this);
	this->SetSecond(this->GetSecond() - 1);
	return t;
}