#ifndef KAMERA_HPP_INCLUDED
#define KAMERA_HPP_INCLUDED

class Kamera{

protected:
    int megaPikseli;
    int freeSpace;
    static int photoCounter;

public:
    Kamera() : megaPikseli(1), freeSpace(10) {}
    Kamera(int mP, int fS) : megaPikseli(mP), freeSpace(fS) {}
    Kamera(const Kamera &cam) {
        megaPikseli=cam.megaPikseli;
        freeSpace=cam.freeSpace;
    }

    int getPhotoCounter() const {
        return photoCounter;
    }

    bool slikaj() {
        bool uslikano=false;
        if(freeSpace-megaPikseli >= 0) {
            freeSpace-=megaPikseli;
            photoCounter++;
            uslikano=true;
        }
        return uslikano;
    }
};


#endif // KAMERA_HPP_INCLUDED
