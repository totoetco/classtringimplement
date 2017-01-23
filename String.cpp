#include <cstdio>
#include <cstdlib>
#include "String.h"

void String::Afficher(void){
    
    for(size_t i=0 ; i<len ; i++) {
        printf("%c",str[i]);
    }
    printf("\n");
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