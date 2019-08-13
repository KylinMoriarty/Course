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
    cout<<"姓 名\t"<<"汉语\t"<<"数学\t"<<"英语\t"<<"总分\t"<<"平均分\t"<<endl;
    cout<<name<<"\t"<<Chinese<<"\t"<<Math<<"\t"<<English<<"\t"<<getTotal()<<"\t"<<getAverage()<<endl<<endl;

}

void comFinal::show() const {
    cout<<"学生姓名 ："<<getName()<<endl;
    cout<<"英语成绩 ："<<getEng()<<endl;
    cout<<"语文成绩 ："<<getChi()<<endl;
    cout<<"数学成绩 ："<<getMat()<<endl;
    cout<<"基础课总分 ："<<getTotal()<<endl;
    cout<<"基础课平均成绩 ："<<getAverage()<<endl;
}
