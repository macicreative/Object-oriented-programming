#ifndef ODECA_HPP_INCLUDED
#define ODECA_HPP_INCLUDED

#include "proizvod.hpp"

enum Velicina{XS,S,M,L,XL};
enum TipOdece{MAJICA,PANTALONE};

class Odeca: public Proizvod {

private:
    Velicina velicina;
    TipOdece tip;
    static int velikaOdeca;

public:

    Odeca(int c, const char* n, Velicina v, TipOdece t): Proizvod(c,n), velicina(v), tip(t) {
        if (v==L || v==XL){
            velikaOdeca++;
        }
    }

    ~Odeca(){
        if(velicina==L || velicina==XL){
        velikaOdeca--;
        }
    }

    void izracunaj(){
        double popust=0.33;
        if(tip == MAJICA){
            if(velicina == XS){
                popust=0.6;
            } else {
                popust=0.5;
            }
        }
    cena-= cena * popust;
    }

    void ispisi(){

    Proizvod::ispisi();
    cout<<"Tip odece: ";
        switch(tip){
        case(MAJICA):cout<<"MAJICA"<<endl;break;
        case(PANTALONE):cout<<"Pantalone"<<endl;break;
        default:cout<<"Nepoznat tip odece"<<endl;
        }
    cout<<"Velicina odece: ";
        switch(velicina){
            case XS: cout << "XS" << endl; break;
            case S: cout << "S" << endl; break;
            case M: cout << "M" << endl; break;
            case L: cout << "L" << endl; break;
            case XL: cout << "XL" << endl; break;
        }

    }
     int getVelikaOdeca() const {
         return velikaOdeca;
     }

};

#endif // ODECA_HPP_INCLUDED
