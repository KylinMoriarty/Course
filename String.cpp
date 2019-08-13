#include "string.h"

void String::setString(const char* s2){
    sPtr = new char[length+1];
    strcpy(sPtr,s2);//strcpy函数，前面的长度一定要大于后面的，否则就会崩。
}

String::String(const char *s):length(strlen(s)) {setString(s);}

String::~String(){delete []sPtr;}

const String& String::operator=(const String &R){
    if(&R!=this){
        delete []sPtr;
        length = R.length;
        setString(R.sPtr);
    }
    return *this;
}

const String& String::operator+=(const String &R){
    char *temp = sPtr;
    length += R.length;
    sPtr = new char[length+1];
    strcpy(sPtr,temp);
    strcat(sPtr,R.sPtr);
    delete []temp;
    return *this;
}

bool String::operator==(const String &R){ return strcmp(sPtr,R.sPtr)==0; }
bool String::operator!=(const String &R){ return !(*this==R); }
bool String::operator!(){ return length==0; }
bool String::operator<(const String &R) const { return strcmp(sPtr,R.sPtr)<0; }
bool String::operator>(const String &R) { return R<*this; }
bool String::operator>=(const String &R){ return !(*this<R); }
char &String::operator[](int subscript) { return sPtr[subscript]; }

ostream &operator<<(ostream &os,const String &s){
    os<<s.sPtr;
    return os;
}

istream &operator>>(istream &is,String &s){
    char temp[100];
    is>>temp;
    s.setString(temp);
    return is;
}
