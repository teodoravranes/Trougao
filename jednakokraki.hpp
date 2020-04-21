#ifndef JEDNAKOKRAKI_HPP_INCLUDED
#define JEDNAKOKRAKI_HPP_INCLUDED

#include "Trougao.hpp"

class Jednakokraki : public Trougao
{
public:
Jednakokraki : Trougao(1,2,2) {}
Jednakokraki(double a1, double b1) : Trougao(a1,b1,b1) {}
Jednakokraki(const Jednakokraki &jednakokraki) : Trougao(jednakokraki.a, jednakokraki.b, jednakokraki.c) {}
};

#endif
