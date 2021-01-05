#include <iostream>

using namespace std;

#include "voce.hpp"
#include "odeca.hpp"
#include "grad.hpp"
int Odeca::velikaOdeca=0;

int main()
{
    Voce v1(60,"Sljiva", "Srbija", 6);
    Voce v2(100, "Kruska", "Srbija", 3);
    Voce v3(80, "Limun", "Srbija", 15);

    cout<<"TESTIRANJA KLASE VOCE"<<endl<<endl;

    v1.ispisi();
    cout<<endl;
    v2.ispisi();
    cout<<endl;
    v2.izracunaj();
    cout<<"Nakon popusta: "<<endl;
    v2.ispisi();
    cout<<endl;
    v3.izracunaj();
    v3.ispisi();
    cout<<endl;


    cout<<"TESTIRANJE KLASE ODECA"<<endl<<endl;

    Odeca o1(450, "A", XS, MAJICA);
    Odeca o2(1500,"B", L, PANTALONE);
    Odeca o3(1000, "A", S, PANTALONE);
    Odeca o4(1200, "C", XL, MAJICA);

    o1.ispisi();
    cout<<endl;

    o1.izracunaj();
    cout << "Nakon popusta" << endl;
    o1.ispisi();
    cout<<endl<<endl;

    o2.ispisi();
    cout<<endl;
    cout<<"Broj velike odece: " <<o2.getVelikaOdeca()<<endl<<endl;

    cout << "TESTIRANJA KLASE PRODAVNICA" << endl;

    Prodavnica p1("CROP");
    p1.dodajProizvod(o1);
    p1.dodajProizvod(o2);
    p1.dodajProizvod(o3);
    p1.dodajProizvod(o4);
    p1.dodajProizvod(v2);

    cout<<p1<<endl<<endl;

    p1.obrisi(1);
    cout<<"Nakon brisanja: "<<endl;
    cout<<p1<<endl<<endl;

    p1.akcija(1550);

    cout<<"Nakon akcije: "<<endl;
    cout<<p1<<endl;

    Prodavnica p2("ORGANIC");
    p2.dodajProizvod(v1);
    p2.dodajProizvod(v2);
    p2.dodajProizvod(v3);

    cout<<p2<<endl;
    p2.obrisiProizvod("Limun");
    cout<<"Nakon brisanja: "<<endl;
    cout<<p2<<endl<<endl;

    cout<<"TESTIRANJA KLASE GRAD"<<endl<<endl;

    Grad g1;
    Grad g2("Beograd");
    g2.dodajProdavnicu(p1);
    g2.dodajProdavnicu(p2);

    g2.ispisiNajjeftinijuProdavnicu();

    return 0;
}
