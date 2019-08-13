#include "Chemistry.h"
#include <iostream>

using namespace std;

Chemistry::Chemistry(char* n,int Eng,int Chi,int Mat,int Che,int Ana):comFinal(n,Eng,Chi,Mat){
    Chemistr=Che;
    Analy=Ana;
}

ostream& operator<<(ostream &out,const Chemistry &o){
    cout<<"姓 名\t"<<"汉语\t"<<"数学\t"<<"英语\t"<<"化学\t"<<"化学分析\t"<<"基础总分\t"<<"基础平均分\t"<<endl;
    out<<o.name<<"\t"<<o.Chinese<<"\t"<<o.Math<<"\t"<<o.English<<"\t"<<o.Chemistr<<"\t"<<o.Analy<<"\t\t"<<o.getTotal()<<"\t\t"<<o.getAverage()<<endl<<endl;//注意有两个t的情况
    return out;
}

void Chemistry::Output() const {
    cout<<"姓 名\t"<<"汉语\t"<<"数学\t"<<"英语\t"<<"化学\t"<<"化学分析\t"<<"基础总分\t"<<"基础平均分\t"<<endl;
    cout<<name<<"\t"<<Chinese<<"\t"<<Math<<"\t"<<English<<"\t"<<Chemistr<<"\t"<<Analy<<"\t\t"<<getTotal()<<"\t\t"<<getAverage()<<endl<<endl;//注意有两个t的情况

}

void Chemistry::show() const{
    comFinal::show();
    cout<<"有机化学成绩 ："<<Chemistr<<endl;
    cout<<"化学分析成绩 ："<<Analy<<endl;
    cout<<"总分 ："<<getTotal()+Chemistr+Analy<<endl;
}
