#ifndef VOCE_HPP_INCLUDED
#define VOCE_HPP_INCLUDED

#include "proizvod.hpp"

class Voce: public Proizvod{

private:
    DinString zemljaPorekla;
    int rokTrajanja;
public:
    Voce(int c, const char* n, const char* zP, int rT): Proizvod(c,n){
        zemljaPorekla=zP;
        rokTrajanja=rT;
    }

    void izracunaj(){
        double popust= 0.33;
        if(rokTrajanja < 5 && rokTrajanja > 0) {
            popust=0.66;
        } else if(rokTrajanja <= 0){
            popust=1;
        }
        cena -= cena * popust;
    }

    void ispisi() {
        Proizvod::ispisi();
        cout<<"Zemlja porekla: "<<zemljaPorekla<<endl;
        cout<<"Rok trajanja: "<<rokTrajanja<<endl;
    }



};

#endif // VOCE_HPP_INCLUDED
