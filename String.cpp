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

<<<<<<< HEAD
size_t String::size() const
{
    return len;
}

void String::clear()
{
  len = 0;
}
=======
size_t String::length() const
{
    return len;
}
>>>>>>> e7b56214d3582c3d2e7ca9bee24f73afa007bbf2
