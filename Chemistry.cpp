#include "Chemistry.h"
#include <iostream>

using namespace std;

Chemistry::Chemistry(char* n,int Eng,int Chi,int Mat,int Che,int Ana):comFinal(n,Eng,Chi,Mat){
    Chemistr=Che;
    Analy=Ana;
}

ostream& operator<<(ostream &out,const Chemistry &o){
    cout<<"�� ��\t"<<"����\t"<<"��ѧ\t"<<"Ӣ��\t"<<"��ѧ\t"<<"��ѧ����\t"<<"�����ܷ�\t"<<"����ƽ����\t"<<endl;
    out<<o.name<<"\t"<<o.Chinese<<"\t"<<o.Math<<"\t"<<o.English<<"\t"<<o.Chemistr<<"\t"<<o.Analy<<"\t\t"<<o.getTotal()<<"\t\t"<<o.getAverage()<<endl<<endl;//ע��������t�����
    return out;
}

void Chemistry::Output() const {
    cout<<"�� ��\t"<<"����\t"<<"��ѧ\t"<<"Ӣ��\t"<<"��ѧ\t"<<"��ѧ����\t"<<"�����ܷ�\t"<<"����ƽ����\t"<<endl;
    cout<<name<<"\t"<<Chinese<<"\t"<<Math<<"\t"<<English<<"\t"<<Chemistr<<"\t"<<Analy<<"\t\t"<<getTotal()<<"\t\t"<<getAverage()<<endl<<endl;//ע��������t�����

}

void Chemistry::show() const{
    comFinal::show();
    cout<<"�л���ѧ�ɼ� ��"<<Chemistr<<endl;
    cout<<"��ѧ�����ɼ� ��"<<Analy<<endl;
    cout<<"�ܷ� ��"<<getTotal()+Chemistr+Analy<<endl;
}
