#ifndef PRODAVNICA_HPP_INCLUDED
#define PRODAVNICA_HPP_INCLUDED

#include "list.hpp"
#include "proizvod.hpp"

class Prodavnica {

private:
    DinString nazivProdavnice;
    List<Proizvod*> proizvodi;

public:

    Prodavnica(const char* nP): nazivProdavnice(nP) {}

    bool dodajProizvod(Proizvod& pr){

    Proizvod* p;
        for(int i=1; i<=proizvodi.size(); i++){
            proizvodi.read(i,p);
            if(p->getNaziv()== (&pr)->getNaziv()) {
                return false;
            }

        }
            return proizvodi.add(1,&pr);

    }

   void obrisiProizvod(const DinString& naziv){

    Proizvod* p;
        for (int i = 1; i <= proizvodi.size(); i++){
            proizvodi.read(i, p);
            if (p->getNaziv() == naziv){
                proizvodi.remove(i);
                break;
            }
        }
    }

    bool obrisi(int index){
        return proizvodi.remove(index);
    }

    void akcija(int cena) {

    Proizvod* p;
        for(int i=1; i<=proizvodi.size();i++){
            proizvodi.read(i,p);
            if(p->getCena() < cena) {
                p->izracunaj();
            }
        }

    }

    double getProsecnaCena() {
        double prosecnaCena=0;

        Proizvod* p;
        for(int i=1; i<=proizvodi.size(); i++){
            proizvodi.read(i,p);
            prosecnaCena+=p->getCena();
        }
        return prosecnaCena/proizvodi.size();

    }

     friend ostream& operator<<(ostream& os, const Prodavnica& p){
     os<<"Naziv prodavnice "<<p.nazivProdavnice<<endl;
     os<<"Proizvodi u prodavnici: "<<endl<<endl;

         Proizvod* pom;
         for(int i=1; i<=p.proizvodi.size();i++){
            p.proizvodi.read(i,pom);
            pom->ispisi();
            os<<endl;
         }

     return os;

     }


};

#endif // PRODAVNICA_HPP_INCLUDED
