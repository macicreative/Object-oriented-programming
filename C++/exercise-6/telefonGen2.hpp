#ifndef TELEFONGEN2_HPP_INCLUDED
#define TELEFONGEN2_HPP_INCLUDED

#include "telefon.hpp"
#include "kamera.hpp"
#include <iostream>
using namespace std;

class TelefonGen2 : public Telefon {
protected:
    Kamera k;

public:
    TelefonGen2() : Telefon(), k() {}
    TelefonGen2(DinString br, int mp, int fs): Telefon(br), k(mp,fs) {}

    int getPhotoCounter() const
        {
            return k.getPhotoCounter();
        }

    bool slikajSliku() {
        return k.slikaj();
    }

};

#endif // TELEFONGEN2_HPP_INCLUDED
