#include <iostream>
#include <cstring>
#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

using namespace std;

class String{
private:
    int length;
    char *sPtr;
    void setString(const char* s2);

    friend ostream &operator<<(ostream &os,const String &s);
    friend istream &operator>>(istream &is,String &s);
public:
    String(const char* = "");
    ~String();
    const String &operator=(const String &R);
    const String &operator+=(const String &R);
    bool operator==(const String &R);
    bool operator!=(const String &R);
    bool operator!();
    bool operator<(const String &R) const ;
    bool operator>(const String &R);
    bool operator>=(const String &R);
    char &operator[](int);
};


#endif // STRING_H_INCLUDED
