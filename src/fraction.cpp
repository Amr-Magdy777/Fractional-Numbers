#include "fraction.h"

fraction::fraction(){}
fraction::fraction(int a, int b){num=a;den=b;}
void fraction::setNum( int a){num=a;}
void fraction::setDen( int a){den=a;}
int fraction::getNum(){return num;}
int fraction::getDen(){return den;}

fraction fraction::operator+(  fraction f){
    num=(num*f.getDen())+(f.getNum()*den);
    den*=f.getDen();
    return *this;};

fraction fraction::operator* ( fraction f){
    num*=f.getNum();
    den*=f.getDen();
    return *this;}

    fraction fraction::operator- ( fraction f){
    num=(num*f.getDen())-(f.getNum()*den);
    den*=f.getDen();
    return *this;
    }



    fraction fraction::operator/ ( fraction f){
    num/=f.getNum();
    den/=f.getDen();
    return *this;
    }

    bool fraction::operator < ( fraction f ){
    double x , y;
    x=(double)num/den; y=(double)f.getNum()/f.getDen();
    if(x<y) return true;
    else return false;

    }

    bool fraction::operator > ( fraction f ){
    double x , y;
    x=(double)num/den; y=(double)f.getNum()/f.getDen();
    if(x>y) return true;
    else return false;

    }

    bool fraction::operator <= ( fraction f ){
    double x , y;
    x=(double)num/den; y=(double)f.getNum()/f.getDen();
    if(x<=y) return true;
    else return false;

    }

    bool fraction::operator >= ( fraction f ){
    double x , y;
    x=(double)num/den; y=(double)f.getNum()/f.getDen();
    if(x>=y) return true;
    else return false;

    }

    bool fraction::operator == ( fraction f ){
    double x , y;
    x=(double)num/den; y=(double)f.getNum()/f.getDen();
    if(x==y) return true;
    else return false;

    }
    void fraction::reduce(){
    for(int i=2;i<=10;i++){
        if(num%i==0 and den%i==0){
            num/=i; den/=i; i--;}
   }}

 istream& operator >> ( istream & in , fraction &f ){
in>>f.num>>f.den;
return in;
}

 ostream& operator << (ostream & out , fraction &f ){
out<<f.num<<'/'<<f.den;
return out;
}

fraction::~fraction(){}


