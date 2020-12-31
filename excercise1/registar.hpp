#ifndef REGISTAR_HPP_INCLUDED
#define REGISTAR_HPP_INCLUDED

#include "list.hpp"
#include "dokument.hpp"

class Registar{

private:
    List<Dokument*> dokumenti;
    List<Dokument*> poverljivi;

public:
    Registar(): dokumenti(), poverljivi(){}

    void dodaj(Dokument &d) {
        if((&d)->getTip()==POVERLJIV){
            poverljivi.add(1, &d);
            cout<<"Dodato u listu poverljivih!"<<endl;
        }
        else {
            dokumenti.add(1,&d);
            cout<<"Dodato u listu dokumenata!"<<endl;
        }
    }

    void ispis() {
        cout<<"ISPIS REGISTRA"<<endl<<endl;

        Dokument *pomocni;
        cout<<"Lista dokumenata"<<endl<<endl;
        if(dokumenti.empty()){
            cout<<"Lista dokumenata je prazna."<<endl;
        }

        for(int i=1; i<=dokumenti.size(); i++) {
            dokumenti.read(i,pomocni);
            (*pomocni).ispis();
            cout<<endl;
        }
        cout<<"Lista poverljivih dokumenata:"<<endl<<endl;
            if(poverljivi.empty()){
                cout<<"Lista poverljvih dokumenata je prazna."<<endl;
            }

        for(int i=1; i<=poverljivi.size(); i++) {
            poverljivi.read(i,pomocni);
            pomocni->ispis();
            cout<<endl;
        }

    }
    void skidanjePoverljivosti() {
        cout<<"-Skidanje poverljivosti-"<<endl;
        Dokument *pomocni;
        for(int i=1; i<=poverljivi.size();i++) {
              poverljivi.read(i, pomocni);
              poverljivi.remove(i);
              i=0;
              pomocni->setTip(ZVANICAN);
              dokumenti.add(dokumenti.size()+1, pomocni);
        }
        }

};
#endif // REGISTAR_HPP_INCLUDED
