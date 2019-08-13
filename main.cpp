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

void display(const comFinal *p){ p->show(); cout<<endl;}//重载输出虚函数，让基类指针可以输出派生类。

void display2(const comFinal &p){ cout<<p; cout<<endl;}
//注意重载运算符的传引用，这里就要传引用，指针会报错。实际上是将display函数放到了重载运算符的运算中
//由于基类无法调用派生类的友元函数，所以派生类应将输入输出操作写在非输入输出运算符函数内

int testCourse(){
    comFinal *a[3]; //指针数组
    comFinal c("王麒麟",100,100,100);
    Account a1("杨 帆",98,78,97,67,87);
    Chemistry c1("邱 伦",89,76,34,56,78);
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
    cout<<"s1 is "<<s1<<"\ns2 is "<<s2<<"\ns3 is "<<s3<<endl;//不加分号的话会吧<<全都执行完再输出，CNM。
    cout<<"\n比较s2和s1："
        <<"\ns2 == s1的结果是 "<<( s2==s1? "true" : "false")
        <<"\ns2 != s1的结果是 "<<( s2!=s1? "true" : "false")
        <<"\ns2 >  s1的结果是 "<<( s2> s1? "true" : "false")
        <<"\ns2 <  s1的结果是 "<<( s2< s1? "true" : "false")
        <<"\ns2 >= s1的结果是 "<<( s2>=s1? "true" : "false");
    cout<<"\n\n测试s3是否为空：";
    if(!s3){
        cout<<"s3是空串"<<endl;
        cout<<"把s1赋给s3的结果是：";
        s3=s1;
        cout<<"s3 = "<<s3<<"\n";
    }
    cout<<"s1+=s2的结果是：";
    s1+=s2;
    cout<<s1;
    cout<<"\ns1 += to you 的结果是：";
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
    printf("%s\n",test_strcpy(str1,str2));//这一行就说明了返回char*的作用
    //如果是str1[]="" 会输出但是会崩溃。str1[]=位数大于str2的都不会蹦。
    //*str1直接蹦。*str = new char[x]都不会蹦。？会自动加内存？



    char* p="hello";//其实这里分配了常量，即const，如果不让p指向别的地址就无法修改。
    char q[]="world";
    char a[3];
    cout<<&p<<" "<<&q<<" "<<endl;
    cout<<p<<" "<<q<<endl;

    //char q[]={'0','1','2'};//这个地址为什么和上面一样？？？


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
