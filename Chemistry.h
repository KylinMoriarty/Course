#include "comFinal.h"
#ifndef CHEMISTRY_H_INCLUDED
#define CHEMISTRY_H_INCLUDED

class Chemistry:public comFinal{
protected:
    int Chemistr;
    int Analy;
    int majTotal;
    float majAve;
public:
    Chemistry(char* n,int Eng,int Chi,int Mat,int Che,int Ana);
    Chemistry(){};
    int getMajtotal(){return Chemistr+Analy;}
    float getMajave(){return float((Chemistr+Analy)/2);}
    int getAnaly(){return Analy;}
    int getChemistry(){return Chemistr;}
    void setAnaly(int x){Analy=x;}
    void setChemistry(int x){Chemistr=x;}

    void show() const;
    void Output() const;

    friend ostream &operator<<(ostream &os,const Chemistry &s);
};


#endif // CHEMISTRY_H_INCLUDED
