#ifndef EVIDENCIJALEKOVA_HPP_INCLUDED
#define EVIDENCIJALEKOVA_HPP_INCLUDED

#include "lek.hpp"
#include "list.hpp"

class EvidencijaLekova {
private:
    DinString nazivApoteke;
    DinString datum;
    List<Lek> lekovi;

public:
    EvidencijaLekova(): nazivApoteke("HIGIJA"), datum("16.3.2020.") {}

    bool dodajLek(const Lek& lek){
            return lekovi.add(1, lek);
    }

    bool dodajLek(long jkl, const char naziv[], int jedinicnaCena, int kolicina){
        Lek lek(jkl, naziv, jedinicnaCena, kolicina);
        return lekovi.add(lekovi.size() + 1, lek);
    }

    bool obrisiLek(int pozicija){
        return lekovi.remove(pozicija);
    }

   void sortiraj() {
        Lek lek1,lek2;

        for(int i = 1; i < lekovi.size(); i++){

            for(int j = i + 1; j <= lekovi.size(); j++){
                lekovi.read(i,lek1);
                lekovi.read(j,lek2);

                    if(lek1.getVrednost() > lek2.getVrednost()){
                        lekovi.remove(i);
                        lekovi.add(i,lek2);
                        lekovi.remove(j);
                        lekovi.add(j, lek1);
                    }
            }
        }
    }



    friend ostream& operator<<(ostream& os, const EvidencijaLekova& evidencija){
        os<<"Naziv apoteke: "<<evidencija.nazivApoteke<<endl;
        os<<"Datum: "<<evidencija.datum<<endl;
        os<<"Lekovi u apoteci: "<<endl;
            if(evidencija.lekovi.empty()){
                os<<"Nema lekova u apoteci. "<<endl;
            } else {
                Lek lek;
                for(int i=1; i<=evidencija.lekovi.size(); i++){
                    evidencija.lekovi.read(i, lek);
                        os<<lek<<endl;
                }

            }
        return os;


    }
};
#endif // EVIDENCIJALEKOVA_HPP_INCLUDED
