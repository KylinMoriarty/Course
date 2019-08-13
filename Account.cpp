#include "Account.h"
#include <iostream>

using namespace std;

Account::Account(char* n,int Eng,int Chi,int Mat,int Acc,int Eco):comFinal(n,Eng,Chi,Mat){
    Econ=Eco;
    Accoun=Acc;
}

ostream& operator<<(ostream &out,const Account &o){
    cout<<"�� ��\t"<<"����\t"<<"��ѧ\t"<<"Ӣ��\t"<<"���ѧ\t"<<"����ѧ\t"<<"�����ܷ�\t"<<"����ƽ����\t"<<endl;
    out<<o.name<<"\t"<<o.Chinese<<"\t"<<o.Math<<"\t"<<o.English<<"\t"<<o.Accoun<<"\t"<<o.Econ<<"\t"<<o.getTotal()<<"\t\t"<<o.getAverage()<<endl<<endl;
    return out;
}

void Account::Output() const{
    cout<<"�� ��\t"<<"����\t"<<"��ѧ\t"<<"Ӣ��\t"<<"���ѧ\t"<<"����ѧ\t"<<"�����ܷ�\t"<<"����ƽ����\t"<<endl;
    cout<<name<<"\t"<<Chinese<<"\t"<<Math<<"\t"<<English<<"\t"<<Accoun<<"\t"<<Econ<<"\t"<<getTotal()<<"\t\t"<<getAverage()<<endl<<endl;

}

void Account::show() const{
    comFinal::show() ;
    cout<<"���ѧ�ɼ� ��"<<Accoun<<endl;
    cout<<"����ѧ�ɼ� ��"<<Econ<<endl;
    cout<<"�ܷ� ��"<<getTotal()+Accoun+Econ<<endl;
}
