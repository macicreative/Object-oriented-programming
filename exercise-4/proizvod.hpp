#ifndef PROIZVOD_HPP_INCLUDED
#define PROIZVOD_HPP_INCLUDED
#include "dinstring.hpp"

class Proizvod{

protected:
    int cena;
    DinString naziv;

public:
    Proizvod(int c, const char* n) : cena(c), naziv(n) {}

    virtual void izracunaj()=0;

    virtual void ispisi(){
    cout<<"Naziv proizvoda: "<<naziv<<endl;
    cout<<"Cena proizvoda: "<<cena<<endl;
    }

   DinString getNaziv() const{
   return naziv;
   }

   int getCena() const{
        return cena;
   }


};

#endif // PROIZVOD_HPP_INCLUDED
