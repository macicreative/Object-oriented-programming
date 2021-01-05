#include <iostream>
#include "checkbox.hpp"
#include "label.hpp"
#include "panel.hpp"

using namespace std;

int main()
{
    cout<<"Testiranje klase CheckBox"<<endl;
    CheckBox cb;
    CheckBox cb1(2.2,3.4,true);
    CheckBox cb2(4.5,5.7,true);

    cb.printComponent();
    cout<<endl;
    cb1.printComponent();
    cout<<endl;
    cb2.printComponent();
    cout<<endl<<endl;

    cout<<"Testiranje klase Label"<<endl;
    Label l;
    Label l1(2.3,4.4,"label-1");
    Label l2(4.5,3.4,"label-2");

    l.printComponent();
    cout<<endl;
    l1.printComponent();
    cout<<endl;
    l2.printComponent();
    cout<<endl<<endl;

    cout<<"Testiranja klase PANEL"<<endl;
    Panel p;
    p.setCapacity(3);

    p.printComponent();
    cout<<endl;

    Panel p1;
    p1.addComponent(cb1);
    p1.addComponent(cb2);
    p1.addComponent(cb);
    p1.addComponent(l2);
    p1.addComponent(cb1);
    p1.addComponent(cb2);
    p1.addComponent(cb);
    p1.addComponent(l2);
    p1.addComponent(cb1);
    p1.addComponent(cb2);
    p1.addComponent(l1);

    p1.printComponent();
    cout<<endl;

    if(!(p1.addComponent(l1))){
        cout<<"Greska prilikom dodavanja komponente, capacitet je pun."<<endl;
    }

    p1.removeComponent(-2);
    p1.removeComponent(10);
    p1.printComponent();
    cout << endl << endl;

    Panel p2(p1);
    p2.printComponent();
    cout << endl << endl;


    return 0;
}
