#ifndef TEST_HPP_INCLUDED
#define TEST_HPP_INCLUDED
#include "dinstring.hpp"

class Test{

protected:
    DinString naziv;
    int osvojeniPoeni;

public:

    Test(): naziv(""), osvojeniPoeni(0) {}
    Test(const char* n, int oP): naziv(n), osvojeniPoeni(oP) {}

    void ispis() const{
    cout<< "Naziv "<<naziv<<endl;
    cout<<"Broj osvojenih poena: "<<osvojeniPoeni<<endl;
    }

    virtual int getPoeni() const=0;
    virtual bool polozio() const=0;

};

#endif // TEST_HPP_INCLUDED
