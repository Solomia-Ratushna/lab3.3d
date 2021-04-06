//Sourse.cpp
#include <iostream>
#include "Rational.h"

int main()
{
    //Rational a, b, c;
    Rational a, b, c;
    int result;
    cout << "__________________________" << endl;
    cout << "\nPair A" << endl;
    cin >> a;
    
    cout << "__________________________" << endl;
    cout << "\nPair B" << endl;
    cin >> b;
    
    cout << "__________________________" << endl;
    cout << "\nPair C" << endl;
    cin >> c;
  
    cout << "__________________________" << endl;
    cout << "\na and b" << endl;
    result = a.ComparePairs(a, b);
    a.ComparePairsResult(result);
    cout << "__________________________" << endl;

    cout << "\na and c" << endl;
    result = a.ComparePairs(a, c);
    a.ComparePairsResult(result);
    cout << "__________________________" << endl;

    cout << "\nb and c" << endl;
    result = a.ComparePairs(b, c);
    a.ComparePairsResult(result);
    cout << "__________________________" << endl;

    cout << "a++" << endl;
    cout << a++ << endl;
    cout << "__________________________" << endl;
    cout << "a--" << endl;
    cout << a-- << endl;
    cout << "__________________________" << endl;
    cout << "++a" << endl;
    cout << ++a << endl;
    cout << "__________________________" << endl;
    cout << "--a" << endl;
    cout << --a << endl;
    cout << "__________________________" << endl;
    cout << "Size of class is equal to " << sizeof(Rational) << endl;

    return 0;
}