//Rational-Private.h
#pragma once
#include "Pair.h"
class Rational:private Pair
	{
	public:
		Rational();
		Rational(double, double);
		Rational(Rational&);

		Rational& operator = (const Rational&);
		friend ostream& operator << (ostream&, const Rational&);
		friend istream& operator >> (istream&, Rational&);
		operator string() const;

		int ComparePairs(const Rational p1, const Rational p2) const;
		void ComparePairsResult(int result);

		Rational& operator ++ ();
		Rational& operator -- ();
		Rational operator ++ (int);
		Rational operator -- (int);
	};



