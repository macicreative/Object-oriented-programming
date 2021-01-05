#ifndef CHECKBOX_HPP_INCLUDED
#define CHECKBOX_HPP_INCLUDED

#include "component.hpp"

class CheckBox: public Component {

private:
    bool pressed;
    static DinString typeName;

public:
    CheckBox(double X=0, double Y=0, bool pressed=false) {
        this-> X = X;
        this-> Y = Y;
        this-> pressed= pressed;

    }
    DinString getTypeName() const{
        return typeName;

    }
    bool getPressed() const{
        return pressed;
    }
    void setPressed(bool pressed){
        this->pressed=pressed;
    }
    void printComponent() const{
        cout<<getTypeName()<<endl;
        Component::printComponent();
        cout<<"Vrednost CB pressed: "<<getPressed();
    }


};

DinString CheckBox::typeName = "CheckBox";

#endif // CHECKBOX_HPP_INCLUDED
