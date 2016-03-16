#ifndef FRACTION_H
#define FRACTION_H
#include<iostream>
using namespace std;

class fraction
{   private:
    int num , den;
    public:
    fraction();
    fraction(int , int );
    void setNum( int );
    void setDen( int );
    int getNum();
    int getDen();
    void reduce();
    fraction operator+ ( fraction );
    fraction operator* ( fraction );
    fraction operator- ( fraction );
    fraction operator/ ( fraction );
    bool operator< ( fraction );
    bool operator> ( fraction );
    bool operator<= ( fraction );
    bool operator>= ( fraction );
    bool operator== ( fraction );
    friend istream& operator>>(istream &  , fraction & );
    friend ostream& operator<<(ostream & , fraction & );
    ~fraction();
};

#endif // FRACTION_H
