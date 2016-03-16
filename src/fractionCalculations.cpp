#include "fractionCalculations.h"

fractionCalculations::fractionCalculations()
{

}
void fractionCalculations::addition(fraction a,fraction b){
x= a+b;
x.reduce();
}
void fractionCalculations::subtraction(fraction a,fraction b){
x= a-b;
x.reduce();}
void fractionCalculations::multiplication(fraction a,fraction b){
x= a*b;
x.reduce();}
void fractionCalculations::division(fraction a,fraction b){
x= a/b;
x.reduce();
}

void fractionCalculations::view(){
fraction a,b;
cout<<"Please enter 2 fraction numbers ! "<<endl;
cin>>a>>b;
a.reduce(); b.reduce();
cout<<"Enter the operation you want to make "<<endl;
string s;
cin>>s;
if(s=="+"){addition(a,b); cout<<x<<endl;}
if(s=="-"){subtraction(a,b); cout<<x<<endl;}
if(s=="*"){multiplication(a,b); cout<<x<<endl;}
if(s=="/"){division(a,b); cout<<x<<endl;}

if(s=="=="){if(a==b)cout<<"they both are equal"<<endl; else cout<<"Not equal"<<endl;}
if(s==">"){if(a>b)cout<<"The first is greater"<<endl; }
if(s=="<"){if(a<b)cout<<"The second is greater"<<endl;}
if(s==">="){if(a>=b)cout<<"The first is greater or equals the second"<<endl;}
if(s=="<="){if(a<=b)cout<<"The second is greater or equals the first"<<endl;}

}





fractionCalculations::~fractionCalculations()
{
    //dtor
}
