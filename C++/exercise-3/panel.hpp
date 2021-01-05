#ifndef PANEL_HPP_INCLUDED
#define PANEL_HPP_INCLUDED

#include "component.hpp"
#include "list.hpp"

class Panel: public Component {

private:
    static DinString typeName;
    int capacity;
    List <Component*> components;
public:
    Panel() {
        X=0;
        Y=0;
        capacity=10;
    }
    Panel(const Panel& panel){
         X=panel.X;
         Y=panel.Y;
         capacity=panel.capacity;
         components=panel.components;
    }

    DinString getTypeName() const{
        return typeName;
    }
    void printComponent() const{
        cout<<typeName<<endl;
        Component::printComponent();

        cout<<"Broj komponenti: "<<components.size()<<endl<<"Kapacitet: "<<capacity<<endl;
        if(components.empty()){
            cout<<"Nema komponenti na panelu."<<endl;
        }
        else {
            Component* c;
            for(int i=1; i<=components.size(); i++){
                components.read(i,c);
                c->printComponent();
                cout<<endl;
            }
        }

        }

    int getCapacity() const {
            return capacity;
    }

    void setCapacity(int c) {
        capacity = c;
    }

    bool addComponent(Component& c){
        if(!(components.size()==capacity)){
            return components.add(components.size()+1, &c);

        return false;
        }
    }

    bool removeComponent(int pozicija){
    if(!(pozicija<=0)) {
        return components.remove(pozicija);
       } else { cout<<"Pozicija nije validna!"<<endl;
    }
    }

};

DinString Panel::typeName="Panel";

#endif // PANEL_HPP_INCLUDED
