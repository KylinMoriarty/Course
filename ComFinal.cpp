#include <iostream>
#include <string.h>
#include "comFinal.h"

using namespace std;

comFinal::comFinal(char* n,int Eng,int Chi,int Mat){
    English=Eng;
    Chinese=Chi;
    Math=Mat;
    strcpy(name,n);
}

ostream& operator<<(ostream &out,const comFinal &p){
    p.Output();
    return out;
}

void comFinal::Output() const {
    cout<<"�� ��\t"<<"����\t"<<"��ѧ\t"<<"Ӣ��\t"<<"�ܷ�\t"<<"ƽ����\t"<<endl;
    cout<<name<<"\t"<<Chinese<<"\t"<<Math<<"\t"<<English<<"\t"<<getTotal()<<"\t"<<getAverage()<<endl<<endl;

}

void comFinal::show() const {
    cout<<"ѧ������ ��"<<getName()<<endl;
    cout<<"Ӣ��ɼ� ��"<<getEng()<<endl;
    cout<<"���ĳɼ� ��"<<getChi()<<endl;
    cout<<"��ѧ�ɼ� ��"<<getMat()<<endl;
    cout<<"�������ܷ� ��"<<getTotal()<<endl;
    cout<<"������ƽ���ɼ� ��"<<getAverage()<<endl;
}
