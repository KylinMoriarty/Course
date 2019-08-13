#include "Account.h"
#include <iostream>

using namespace std;

Account::Account(char* n,int Eng,int Chi,int Mat,int Acc,int Eco):comFinal(n,Eng,Chi,Mat){
    Econ=Eco;
    Accoun=Acc;
}

ostream& operator<<(ostream &out,const Account &o){
    cout<<"姓 名\t"<<"汉语\t"<<"数学\t"<<"英语\t"<<"会计学\t"<<"经济学\t"<<"基础总分\t"<<"基础平均分\t"<<endl;
    out<<o.name<<"\t"<<o.Chinese<<"\t"<<o.Math<<"\t"<<o.English<<"\t"<<o.Accoun<<"\t"<<o.Econ<<"\t"<<o.getTotal()<<"\t\t"<<o.getAverage()<<endl<<endl;
    return out;
}

void Account::Output() const{
    cout<<"姓 名\t"<<"汉语\t"<<"数学\t"<<"英语\t"<<"会计学\t"<<"经济学\t"<<"基础总分\t"<<"基础平均分\t"<<endl;
    cout<<name<<"\t"<<Chinese<<"\t"<<Math<<"\t"<<English<<"\t"<<Accoun<<"\t"<<Econ<<"\t"<<getTotal()<<"\t\t"<<getAverage()<<endl<<endl;

}

void Account::show() const{
    comFinal::show() ;
    cout<<"会计学成绩 ："<<Accoun<<endl;
    cout<<"经济学成绩 ："<<Econ<<endl;
    cout<<"总分 ："<<getTotal()+Accoun+Econ<<endl;
}
