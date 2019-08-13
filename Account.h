#include "comFinal.h"
#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

class Account:public comFinal{
protected:
    int Accoun;
    int Econ;
    int majTotal;
    float majAve;
public:
    Account(char* n,int Eng,int Chi,int Mat,int Acc,int Eco);
    Account(){};
    ~Account(){};
    int getMajtotal(){return Econ+Accoun;}
    float getMajave(){return float((Econ+Accoun)/2);}
    int getAccount(){return Accoun;}
    int getEcon(){return Econ;}
    void setAccount(int x){Accoun=x;}
    void setEcon(int x){Econ=x;}

    void show() const;
    void Output() const;

    friend ostream &operator<<(ostream &os,const Account &s);

};


#endif // ACCOUNT_H_INCLUDED
