#ifndef VOZILO_HPP_INCLUDED
#define VOZILO_HPP_INCLUDED

#include "dinstring.hpp"

enum VrstaVozila {LAKO, MOTORNO, TERETNO, PRIKLJUCNO};

class Vozilo {

protected:
    DinString regbr;
    VrstaVozila vrsta;
    int godiste;

public:
    Vozilo() : regbr("NS459OK"), vrsta(MOTORNO), godiste(2021) {}
    Vozilo(const DinString& rb, VrstaVozila v, int g) : regbr(rb), vrsta(v), godiste(g) {}

    DinString getRegBr() const {
        return regbr;
    }

    int getGodiste() const{
        return godiste;
    }
    virtual bool voznoStanje()= 0;
};

#endif // VOZILO_HPP_INCLUDED
