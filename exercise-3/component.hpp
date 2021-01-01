#ifndef COMPONENT_HPP_INCLUDED
#define COMPONENT_HPP_INCLUDED

#include "dinstring.hpp"

class Component{

protected:
    double X;
    double Y;
public:
    double getX() const {
        return X;
    }
    double getY() const {
        return Y;
    }

    virtual void printComponent() const{
        cout<<"Komponenta X: "<<X<<endl;
        cout<<"Komponenta Y: "<<Y<<endl;
    }
    virtual DinString getTypeName() const=0;

};


#endif // COMPONENT_HPP_INCLUDED
