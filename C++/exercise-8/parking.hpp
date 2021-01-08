#ifndef PARKING_HPP_INCLUDED
#define PARKING_HPP_INCLUDED

#include "list.hpp"
#include "autobus.hpp"

class Parking {
private:
    DinString nazivParkinga;
    List<Autobus*> parkirani;
public:
    Parking(const DinString& naziv): nazivParkinga(naziv) {}

    bool uparkiraj(Autobus& a) {
        if(a.voznoStanje()) {
            return parkirani.add(parkirani.size()+1, &a);
        }
        return false;
    }

    void ispisiNove(){
    cout<<"Naziv parkinga: "<<nazivParkinga<<endl<<endl;
    if(parkirani.empty()) {
        cout<<"Parking je prazan."<< endl;
        return;
    }

    Autobus *najmladji;
    parkirani.read(1,najmladji);

    Autobus *a;

    for(int i=2; i<=parkirani.size(); i++){
            parkirani.read(i,a);
       if(a->getGodiste()>najmladji->getGodiste()){
            parkirani.read(i,najmladji);
        }
    }
    for(int i=1; i<=parkirani.size(); i++){
            parkirani.read(i,a);
        if(a->getGodiste()==najmladji->getGodiste()){
            cout<<*a<<endl;
        }
    }

    }
};


#endif // PARKING_HPP_INCLUDED
