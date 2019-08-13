#include <iostream>
#include "comFinal.h"
#include "Chemistry.h"
#include "Account.h"
#include <typeinfo>
#include "string.h"
#include <assert.h>
#include <cstdio>

using namespace std;

char* test_strcpy(char *dst,const char *src)
{
    assert(dst != NULL && src != NULL);
    char *ret = dst;
    while ((*dst++=*src++)!='\0');
//    int i = 0;
//    for (i = 0; dst[i] != '\0'; i++)
//    {
//         dst[i] = src[i];
//    }
//    dst[i] = '\0';
    return ret;
}

void display(const comFinal *p){ p->show(); cout<<endl;}//��������麯�����û���ָ�������������ࡣ

void display2(const comFinal &p){ cout<<p; cout<<endl;}
//ע������������Ĵ����ã������Ҫ�����ã�ָ��ᱨ��ʵ�����ǽ�display�����ŵ��������������������
//���ڻ����޷��������������Ԫ����������������Ӧ�������������д�ڷ�������������������

int testCourse(){
    comFinal *a[3]; //ָ������
    comFinal c("������",100,100,100);
    Account a1("�� ��",98,78,97,67,87);
    Chemistry c1("�� ��",89,76,34,56,78);
    a[0]=&c;
    a[1]=&a1;
    a[2]=&c1;

    for(int i=0;i<3;i++)
    {
        display(a[i]);
        cout<<typeid(a[i]).name()<<endl<<endl;
    }

    for(int i=0;i<3;i++)
    {
        //display2(*a[i]);
        cout<<*a[i];
        cout<<"------------------------------------"<<endl;
    }
    return 0;

//    cout<<c;
//    cout<<"------------------------------------"<<endl;
//    cout<<a1;
//    cout<<"------------------------------------"<<endl;
//    cout<<c1;
//    cout<<"------------------------------------"<<endl;
}

int testString(){
    String a ;
    cin>>a;
    cout<<a<<endl;

    String s1("happy "),s2("new year"),s3;
    cout<<"s1 is "<<s1<<"\ns2 is "<<s2<<"\ns3 is "<<s3<<endl;//���ӷֺŵĻ����<<ȫ��ִ�����������CNM��
    cout<<"\n�Ƚ�s2��s1��"
        <<"\ns2 == s1�Ľ���� "<<( s2==s1? "true" : "false")
        <<"\ns2 != s1�Ľ���� "<<( s2!=s1? "true" : "false")
        <<"\ns2 >  s1�Ľ���� "<<( s2> s1? "true" : "false")
        <<"\ns2 <  s1�Ľ���� "<<( s2< s1? "true" : "false")
        <<"\ns2 >= s1�Ľ���� "<<( s2>=s1? "true" : "false");
    cout<<"\n\n����s3�Ƿ�Ϊ�գ�";
    if(!s3){
        cout<<"s3�ǿմ�"<<endl;
        cout<<"��s1����s3�Ľ���ǣ�";
        s3=s1;
        cout<<"s3 = "<<s3<<"\n";
    }
    cout<<"s1+=s2�Ľ���ǣ�";
    s1+=s2;
    cout<<s1;
    cout<<"\ns1 += to you �Ľ���ǣ�";
    s1+=" to you";
    cout<<"s1 = "<<s1<<endl;
    s1[0]='H';
    s1[6]='N';
    s1[10]='Y';
    cout<<"s1 = "<<s1<<"\n";
    return 0;

}

int main()
{
    char str1[]="assssssssssssssss",str2[] ="qwertyasdfgh";
    printf("%s\n",test_strcpy(str1,str2));//��һ�о�˵���˷���char*������
    //�����str1[]="" ��������ǻ������str1[]=λ������str2�Ķ�����ġ�
    //*str1ֱ�ӱġ�*str = new char[x]������ġ������Զ����ڴ棿



    char* p="hello";//��ʵ��������˳�������const���������pָ���ĵ�ַ���޷��޸ġ�
    char q[]="world";
    char a[3];
    cout<<&p<<" "<<&q<<" "<<endl;
    cout<<p<<" "<<q<<endl;

    //char q[]={'0','1','2'};//�����ַΪʲô������һ��������


    //test_strcpy(str2,p);
    cout<<str2<<" "<<p<<endl;
//    testString();
    cout<<"------------------"<<endl;

  char day[15] = "abcdefghijklmn";
  char* strTmp = "opqrstuvwxyz";

  printf("&day is %x\n",&day);
  printf("&day[0] is %x\n",&day[0]);
  printf("day is %x\n",day);

  printf("\n&strTmp is %x\n",&strTmp);
  printf("&strTmp[0] is %x\n",&strTmp[0]);
  printf("strTmp is %x\n",strTmp);
    return 0;
}
