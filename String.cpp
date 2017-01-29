//Bibliothèques utilisées

#include <cstdio>
#include <cstdlib>
#include "String.h"


// --- Définition des méthodes --- //


//Affichage de la chaine
void String::Afficher (void)
{
    for(size_t i=0 ; i<len ; i++) {
        printf("%c",str[i]);
    }
    printf("\n");
}


//Allocation de mémoire selon une taille donnée
void String::reserve(size_t n) 
{
    if(n != cpty) {
        if(n<len){
            cpty = len;
        }
        else {
            cpty = n;
        }
        char* t = new char[cpty];
        for(size_t i=0 ; i<len ; i++) {
            t[i] = str[i];
        }
        delete [] str;
        str = t;
    }
}






//vérifie si la chaine est vide
bool String::empty() const
{
    return !(len);
}

//vide la memoire pour le string
void String::clear()
{
    len = 0;
}





//Redimensionne le conteneur pour qu'il contienne n éléments
void String::resize(size_t n, char c) {
    if(n<len) {
        for(unsigned int i=n ; i<len ; i++) {
            str[i] = (char)0;
        }
        len = n;
    }
    else if(n>len) {
        if(n>cpty) {
            this->reserve(n);
        }
        for(unsigned int i=len ; i<n ; i++) {
            str[i] = c;
        }
        len = n;
    }
}

//getters ---------------------

//retourne la taille

size_t String::size() const
{
    return len;
}

size_t String::length() const
{
    return len;
}

//retourne la mémoire stockée
size_t String::capacity() const
{
    return cpty;
}
//retroune la taille maximale par defaut, ici -1 car ce n'est pas un attribut de notre classe
size_t String::max_size() const
{
    return -1;
}


//Récupère le char* contenue dans un string, on aurait aussi pu directement renvoyer str qui est un attribut de type pointeur 
const char* String::c_str() const
{
    //char rep[len+1];
    //for(size_t i=0 ; i<len ; i++) {
     //   rep[i] = str[i];
  //  }
    //rep[len] = '\0';
    return str;
}

// Surcharge d'opérateurs
//operateurs d' addition
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

String String::operator+ (const String st)
{
    String s(*this);
    size_t si = st.length();
    if(s.length()+si > s.capacity()) {
        s.reserve(s.length()+si);
    }
    
    for(size_t i=0 ; i<si ; i++) {
        s.str[s.length()+i] = st.str[i];
    }
    s.len += si;
    return s;
}
//operateurs de comparaison
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

String & String::operator= (char unchar)
{
    delete [] str;
    str = new char[1];
    str[0] = unchar;
    cpty = 1;
    len = 1;
    
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


char& String::operator[] (size_t pos){ 

    if (pos<0) {
       return str[len + pos];
    }
    else if  (pos<=MAX_SIZE){       
	return str[pos]; }
    else{
	printf(" position en dehors du charactère\n");
	return str[MAX_SIZE];
}    
}



//Constructeurs - destructeur
String::String ( const String & unStr )

{


len = unStr.length();
cpty = unStr.capacity();

str = new char[cpty];
for(size_t i=0 ; i<len ; i++) {
    str[i] = unStr.str[i];
}

}


String::String (size_t cap)

{

len = 0;
cpty = cap;
str = new char[cap];

}

String::String (const char* cstr)
{

    size_t size = 0;
    while(cstr[size++] != '\0') {}
    size--;
    
    cpty = len = size;
    str = new char[size];
    
    for(size_t i=0 ; i<size ; i++) {
        str[i] = cstr[i];
    }
}
//Fin du Constructeur2

String::~String ( )

{

delete [] str;
}

