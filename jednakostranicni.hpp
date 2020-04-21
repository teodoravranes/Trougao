#ifndef JEDNAKOSTRANICNI_HPP_INCLUDED
#define JEDNAKOSTRANICNI_HPP_INCLUDED

#include "jednakokraki.hpp"

class Jednakostranicni : public Jednakokraki
{
public:
Jednakostranicni() : Jednakokraki(1,1) {}
Jednakostranicni(double a1) : Jednakokraki(a1,a1) {}
Jednakostranicni(const Jednakostranicni &jednakostranicni) : Jednakokraki(jednakostranicni.a, jednakostranicni.b) {}
};

#endif
