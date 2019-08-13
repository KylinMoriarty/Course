#ifndef COMFINAL_H_INCLUDED
#define COMFINAL_H_INCLUDED
#include <iostream>

using namespace std;

class comFinal{
protected:
    char name[20];
    int English,Chinese,Math,Total;
    float average;
public:
    comFinal(char* n,int Eng,int Chi,int Mat);
    comFinal(){};
    ~comFinal(){ delete []name; cout<<"�������ˣ�"<<endl;}
    const char* getName() const {return name;} //˫const�޶�����Ȼ�ᱨ��C++��Ϊ����޸ģ����Է���ֵҲҪ���޶���
    int getEng() const {return English;}
    int getChi() const {return Chinese;}
    int getMat() const {return Math;}
    void setEng(int x){English=x;}
    void setChi(int x){Chinese=x;}
    void setMat(int x){Math=x;}
    int getTotal() const {return English+Chinese+Math;}
    float getAverage() const {return (float)((English+Chinese+Math)/3);}

    virtual void show() const;
    virtual void Output() const;

    //friend ostream &operator<<(ostream &os,const comFinal &s);
    friend ostream &operator<<(ostream &os,const comFinal &p);
};



#endif // COMFINAL_H_INCLUDED
