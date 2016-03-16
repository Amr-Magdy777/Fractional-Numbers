#ifndef FRACTIONCALCULATIONS_H
#define FRACTIONCALCULATIONS_H
#include "fraction.h"
#include <iostream>
using namespace std;



class fractionCalculations
{
    fraction x;
public:
    void addition(fraction,fraction);
    void multiplication(fraction,fraction);
    void division(fraction,fraction );
    void subtraction(fraction,fraction );
    void view();
    fractionCalculations();
    ~fractionCalculations();
};

#endif // FRACTIONCALCULATIONS_H
