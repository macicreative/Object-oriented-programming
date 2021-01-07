#ifndef VIDEOKAMERA_HPP_INCLUDED
#define VIDEOKAMERA_HPP_INCLUDED
#include "kamera.hpp"

class VideoKamera: public Kamera{

protected:
    static int videoCounter;

public:
    VideoKamera(): Kamera() {}
    VideoKamera(int mp, int fs) : Kamera(mp, fs) {}

    int getVideoCounter() const {
        return videoCounter;
    }

    bool snimaj(int sekunde) {
        bool snimljeno=false;
        if(sekunde*megaPikseli <= freeSpace){
            freeSpace-=sekunde*megaPikseli;
            videoCounter++;
            snimljeno=true;
        }
        return snimljeno;

    }
};

#endif // VIDEOKAMERA_HPP_INCLUDED
