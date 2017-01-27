#include <cstdio>
#include <cstdlib>
#include "String.h"

void String::Afficher(void){
    
    for(size_t i=0 ; i<len ; i++) {
        printf("%c",str[i]);
    }
    printf("\n");
}

void String::resize(size_t n){
}

void String::resize(size_t n, char c) {
    if(n<len) {
        for(int i=n ; i<len ; i++) {
            str[i] = (char)0;
        }
        len = n;
    }
    else if(n>len) {
        if(n>cpty) {
            this->reserve(n);
        }
        for(int i=len ; i<n ; i++) {
            str[i] = c;
        }
        len = n;
    }
}

const char* String::c_str() const
{
    char rep[len+1];
    for(size_t i=0 ; i<len ; i++) {
        rep[i] = str[i];
    }
    rep[len] = '\0';
    return rep;
}

size_t String::size() const
{
    return len;
}

void String::clear()
{
  len = 0;
}
    
size_t String::length() const
{
    return len;
}




//--------Les operateurs.


String String::operator+ (char unchar)
{
    String s(*this);
    if(s.length()+1 > s.capacity()) {
        s.reserve(s.length()+1);
    }
    s.str[s.length()] = unchar;
    s.len++;
    return s;
}


String & String::operator= (const String & unStr)
{
    len = unStr.length();
    cpty = unStr.capacity();

    delete [] str;
    str = new char[cpty];
    for(size_t i=0 ; i<len ; i++) {
        str[i] = unStr.str[i];
    }
    return *this;
}

String & String::operator= (const char * uneChaine)
{
    size_t size = 0;
    while(uneChaine[size++] != '\0') {}
    size--;
    
    cpty = len = size;
    delete [] str;
    str = new char[cpty];
    
    for(size_t i=0 ; i<len ; i++) {
        str[i] = uneChaine[i];
    }
    
    return *this;
}

String String::operator+ (const char* uneChaine)
{
    String s(*this);
    size_t si = 0;
    while(uneChaine[si++] != '\0') {}
    si--;
    
    if(s.length()+si > s.capacity()) {
        s.reserve(s.length()+si);
    }
    
    for(size_t i=0 ; i<si ; i++) {
        s.str[s.length()+i] = uneChaine[i];
    }
    s.len += si;
    return s;
}
