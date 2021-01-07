#ifndef TELEFON_HPP_INCLUDED
#define TELEFON_HPP_INCLUDED
#include "dinstring.hpp"
#include <iostream>
using namespace std;

class Telefon {
protected:
    DinString broj;

public:
    Telefon() : broj ("12-345") {}
    Telefon(DinString br): broj(br) {}

    bool pozovi(DinString br) {
    bool pozvan=false;
        if(br!=broj){
            pozvan= true;
        }
        return pozvan;
    }
};

#endif // TELEFON_HPP_INCLUDED
