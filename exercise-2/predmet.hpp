#ifndef PREDMET_HPP_INCLUDED
#define PREDMET_HPP_INCLUDED

#include "list.hpp"
#include "kolokvijum.hpp"

class Predmet{

private:
    DinString naziv;
    List <Test*> testovi;

public:
    Predmet(): naziv(""), testovi() {}
    Predmet(const char* n): naziv(n) {}
    Predmet(const Predmet& p): naziv(p.naziv), testovi(p.testovi) {}

    DinString getNaziv() const {
        return naziv;
    }

    void dodajTest(Test &t){
        testovi.add(testovi.size()+1, &t);
    }

    int getUkupniPoeni() const {
        Test *t;
        int ukupniPoeni=0;
        for(int i=1; i<=testovi.size();i++){
            testovi.read(i,t);
            ukupniPoeni+=t->getPoeni();
        }
        return ukupniPoeni;
    }

    bool polozio() const {
        Test *t;
        for(int i=1; i<=testovi.size(); i++){
            testovi.read(i,t);
            if(!t->polozio())
                return false;
        }
        return(getUkupniPoeni()>55);
    }

    void ispis() const {
    cout<<"Ime predmeta "<<naziv<<endl;
    if(testovi.empty()){
        cout<<"Nema testova na predmetu."<<endl;
    }

        Test *t;
        for(int i=1; i<=testovi.size(); i++){
            testovi.read(i,t);
            t->ispis();
        }
    }


};


#endif // PREDMET_HPP_INCLUDED
