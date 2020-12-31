#include <iostream>
#include "student.hpp"
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    cout<<"Testiranje klase Kolokvijum"<<endl<<endl;
    Kolokvijum k;
    Kolokvijum k1("K1"), k2("K2"), k3("K3"), k4("K4");

    k.ispis();
    cout<< "Kolokvijum: " << (k.polozio() ? "je polozen" : "nije polozen") <<endl<<endl;
    k1.ispis();
    cout<< "Kolokvijum: " << (k1.polozio() ? "je polozen" : "nije polozen") <<endl<<endl;
    k2.ispis();
    cout<< "Kolokvijum: " << (k2.polozio() ? "je polozen" : "nije polozen") <<endl<<endl;
    k3.ispis();
    cout<< "Kolokvijum: " << (k3.polozio() ? "je polozen" : "nije polozen") <<endl<<endl;
    k4.ispis();
    cout<< "Kolokvijum: " << (k4.polozio() ? "je polozen" : "nije polozen") <<endl<<endl<<endl;

    cout<<"Testiranje klase predmet"<<endl;

    Predmet p;
    Predmet p1("ANALIZA 2"), p2("LPRS1"), p3("MISS"), p4("OBJEKTNO PROGRAMIRANJE");

    p.ispis();
    cout<<endl;
    p1.dodajTest(k2);
    p1.ispis();
    cout<<endl;
    p3.ispis();
    cout<<endl;

    p4.dodajTest(k1);
    p4.dodajTest(k2);
    p4.dodajTest(k3);
    p4.ispis();
    cout<<endl;
    p2.dodajTest(k4);
    p2.ispis();
    cout<<endl;

    cout<<"Ukupan broj osvojenih poena: " <<p4.getUkupniPoeni()<<endl;
    cout<< (p4.polozio() ? "Polozen predmet OP": "Nije polozen predmet OP") <<endl;

    cout << endl << endl ;
    cout <<"Testiranje klase Student"<< endl;

    Student s(p1, p2);
    s.ispis();

    return 0;
}
