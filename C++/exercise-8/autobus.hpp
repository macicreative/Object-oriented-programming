#ifndef AUTOBUS_HPP_INCLUDED
#define AUTOBUS_HPP_INCLUDED

#include "vozilo.hpp"

class Autobus: public Vozilo{

private:
    int brojMesta;
    static int brojAutobusa;

public:
    Autobus(): Vozilo()
    {
        brojMesta=20;
        brojAutobusa++;
    }
    Autobus(const DinString& ds, VrstaVozila v, int god, int bm) : Vozilo(ds,v,god)
    {
        brojMesta=bm;
        brojAutobusa++;
    }

    ~Autobus(){
        brojAutobusa--;
    }

    bool voznoStanje() {
        return (godiste > 2000);

    }

    friend ostream& operator<<(ostream& os, const Autobus& bus){
    os<< "Autobus: " << endl;
    os<< "Reg.br: "<< bus.regbr<< endl;
    os<<"Vrsta vozila: " << endl;
        switch(bus.vrsta){
        case LAKO:
        os<< "LAKO" << endl;
        break;
        case MOTORNO:
        os<<"MOTORNO"<<endl;
        break;
        case TERETNO:
        os<<"TERETNO"<<endl;
        break;
        case PRIKLJUCNO:
        os<<"PRIKLJUCNO"<<endl;
        break;
        }

    os<< "Godiste: "<<bus.godiste<<endl;
    os<< "Broj mesta: "<< bus.brojMesta<<endl;
    os<< "Broj autobusa: " << bus.brojAutobusa<<endl;

    return os;

    }

    };

#endif // AUTOBUS_HPP_INCLUDED
