#ifndef GRAD_HPP_INCLUDED
#define GRAD_HPP_INCLUDED

#include "prodavnica.hpp"
#include "list.hpp"

class Grad{

private:
    DinString naziv;
    List<Prodavnica*> prodavnice;
public:
    Grad(): naziv("Novi Sad"), prodavnice() {}
    Grad(const DinString& n): naziv(n) {}

bool dodajProdavnicu(Prodavnica& p) {
    return prodavnice.add(1,&p);
}
void ispisiNajjeftinijuProdavnicu(){

    if(prodavnice.empty()){
        cout<<"Nema prodavnica u gradu."<<endl;
    } else {

    Prodavnica *najjeftinija;
    prodavnice.read(1,najjeftinija);

    Prodavnica *pom;
    for(int i=2; i<=prodavnice.size();i++){
        prodavnice.read(i,pom);
        if(pom->getProsecnaCena() < najjeftinija->getProsecnaCena()) {
            prodavnice.read(i,najjeftinija);
        }
    }
    cout<<"NAJJEFTINIJA PRODAVNICA "<<endl<<endl;
    cout<< *najjeftinija <<endl;

    }
}

};
#endif // GRAD_HPP_INCLUDED
