#ifndef DOKUMENT_HPP_INCLUDED
#define DOKUMENT_HPP_INCLUDED

enum TipEnumeracije{ZVANICAN, POVERLJIV};

class Dokument{

protected:
    TipEnumeracije tip;
    int redniBroj;
    int godina;

public:
    Dokument(): tip(ZVANICAN), redniBroj(23), godina(2003) {}
    Dokument(TipEnumeracije t, int rb, int g): tip(t), redniBroj(rb), godina(g) {}

    TipEnumeracije getTip() const{
        return tip;
    }

    int getBroj() const{
        return redniBroj;
   }

    int getGodina() const{
        return godina;
    }

    void setTip(TipEnumeracije t) {
        tip=t;
    }

    void setBroj(int br) {
        redniBroj=br;
    }

   void setGodina(int god) {
        godina=god;
   }

    virtual void ispis()=0;

};


#endif // DOKUMENT_HPP_INCLUDED
