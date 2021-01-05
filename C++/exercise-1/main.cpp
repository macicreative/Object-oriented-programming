#include <iostream>

using namespace std;

#include "ugovor.hpp"
#include "registar.hpp"
int main()
{
    Ugovor u;
    Ugovor u1(ZVANICAN, 1,2001, "INTERNET");
    Ugovor u2(POVERLJIV, 2, 2002, "BANKOVNI");
    Ugovor u3(ZVANICAN, 3, 2013, "AVIO");
    Ugovor u4(u3);
    Ugovor u5(POVERLJIV,5, 2015,"PRAVNI");
    Ugovor u6(POVERLJIV, 6, 2026, "NASA");

    u1.getTip();
    u1.getBroj();
    u2.getGodina();
    u4.setOpis("TURKISH AIRLINES");
    u4.setBroj(4);

    u.ispis();
    cout<<endl;
    u1.ispis();
    cout<<endl;
    u2.ispis();
    cout<<endl;
    u3.ispis();
    cout<<endl;
    u4.ispis();
    cout<<endl;
    u5.ispis();
    cout<<endl;
    u6.ispis();
    cout<<endl;

    cout<<"Dodavanje u registar: "<<endl;
    Registar r;
    r.dodaj(u1);
    r.dodaj(u2);
    r.dodaj(u3);
    r.dodaj(u4);
    r.dodaj(u5);
    r.dodaj(u6);
    cout<<"----------------------------"<<endl<<endl;

    r.ispis();

    cout<<endl;

    r.skidanjePoverljivosti();

    cout<<endl;

    r.ispis();
    return 0;

}

