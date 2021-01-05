#ifndef UGOVOR_HPP_INCLUDED
#define UGOVOR_HPP_INCLUDED

#include "dokument.hpp"
#include "dinstring.hpp"

class Ugovor: public Dokument{

private:
    DinString opisUgovora;
public:
    Ugovor(): Dokument(ZVANICAN,0,2000), opisUgovora("RADNO") {}
    Ugovor(TipEnumeracije t, int rb,int god, const DinString &opis) : Dokument(t,rb,god), opisUgovora(opis) {}
    Ugovor(const Ugovor& u): Dokument(u), opisUgovora(u.opisUgovora) {}

    DinString getOpis() const{
        return opisUgovora;
    }

    void setOpis(const DinString& o) {
        opisUgovora=o;
    }

    void ispis(){
        cout<<"-Ispis ugovora "<<redniBroj<< endl;
        cout<<"Tip ugovora: "<< endl;
        switch(tip){
        case(ZVANICAN):
            cout<<"Ugovor je zvanican. "<<endl;
            break;
        default:
            cout<<"Ugovor je poverljiv. "<< endl;
        }

       cout<<"Redni broj ugovora: "<< redniBroj<<endl;
       cout<<"Godina kada je napisan: "<<godina<<endl;

        switch(tip) {
        case(POVERLJIV):
        cout<<"POSLOVAN!"<<endl;
        break;
        default:
        cout<<"Opis ugovora: "<<opisUgovora<<endl;

       }
}

};

#endif // UGOVOR_HPP_INCLUDED
