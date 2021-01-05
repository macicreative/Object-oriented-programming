#ifndef LABEL_HPP_INCLUDED
#define LABEL_HPP_INCLUDED

#include "component.hpp"

class Label: public Component{

private:
    DinString text;
    static DinString typeName;

public:
    Label(double X=0, double Y=0, const DinString& t=""): text(t){
    this-> X = X;
    this-> Y = Y;
    }

    DinString getTypeName() const{
        return typeName;
    }

    void printComponent() const{
        cout<<getTypeName()<<endl;
        Component::printComponent();
        cout<<"Text: "<<getText()<<endl;
    }

    DinString getText() const{
    return text;
    }
    void setText(const DinString& t){
        text=t;
    }

};

DinString Label::typeName="Label";

#endif // LABEL_HPP_INCLUDED
