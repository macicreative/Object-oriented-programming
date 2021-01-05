#ifndef LEK_HPP_INCLUDED
#define LEK_HPP_INCLUDED
#include "dinstring.hpp"
#include "artikal.hpp"

class Lek: public Artikal {

private:
    long jkl;
    DinString naziv;
    double jedinicnaCena;
    int kolicina;
public:
    Lek(): jkl(0), naziv(""), jedinicnaCena(0), kolicina(0) {}
    Lek(long j, const char n[], double jc, int k): jkl(j), naziv(n), jedinicnaCena(jc), kolicina(k) {}
    Lek(long jj, const DinString& naz, double jdc, int kol): jkl(jj), naziv(naz), jedinicnaCena(jdc), kolicina(kol) {}
    Lek(const Lek& l): jkl(l.jkl), naziv(l.naziv), jedinicnaCena(l.jedinicnaCena), kolicina(l.kolicina) {}


    double getVrednost() const {
        return kolicina*jedinicnaCena;

    }

    friend ostream& operator<<(ostream&os, const Lek& l){
    os<<"Lek"<<endl;
    os<<"Jkl leka: "<<l.jkl<<endl;
    os<<"Naziv leka: "<<l.naziv<<endl;
    os<<"Jedinicna cena leka: "<<l.jedinicnaCena<<endl;
    os<<"Kolicina leka: "<<l.kolicina<<endl;

    return os;

    }



};

#endif // LEK_HPP_INCLUDED
