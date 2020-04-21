#ifndef TROUGAO_HPP_INCLUDED
#define TROUGAO_HPP_INCLUDED

#include <cmath>

class Trougao 
{
protected:
double a,b,c;

public:
Trougao() {a=1; b=2; c=3;}
Trougao(double a1, double b1, double c1) {a=a1; b=b1; c=c1;}
Trougao(const Trougao &trougao) {a=trougao.a; b=trougao.b; c=trougao.c;}

double getA() const {return a;}
double getB() const {return b;}
double getC() const {return c;}

void setA(double a1) {a=a1;}
void setB(double b1) {b=b1;}
void setC(double c1) {c=c1;}

double getO() const {return a+b+c;}
double getP() const
{
double s = getO()/2;
return sqrt(s * (s - a) * (s - b) * (s - c));
}

};

#endif
