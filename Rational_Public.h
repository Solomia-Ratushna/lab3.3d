//Rational-Public.h
#pragma once
#include "Pair.h"
class Rational_Public : public Pair
{ 
	
	public:
		Rational_Public();
		Rational_Public(double, double);
		Rational_Public(Rational_Public&);

		Rational_Public& operator = (const Rational_Public&);
		friend ostream& operator << (ostream&, const Rational_Public&);
		friend istream& operator >> (istream&, Rational_Public&);
		operator string() const;

		int ComparePairs(const Pair p1, const Pair p2) const;
		void ComparePairsResult(int result);

		Rational_Public& operator ++ ();
		Rational_Public& operator -- ();
		Rational_Public operator ++ (int);
		Rational_Public operator -- (int);
	};


