#include <cstdio>
#include <cstdlib>
#include "String.h"


//-----------Tests -----------//

// si aucune chaine n'est donnée au constructeur
void t1(){
    printf("\ntest 1 \n");
    String s;
    printf("size : %u \n", s.size());
	printf("length : %u \n", s.length());
	printf("capacity : %u \n",s.capacity());
    s.Afficher();
    printf("  \n");
}

// maintenant avec une chaine de caractères 
void t2() {
	printf("test 2 \n");
    String s("Bonjour, comment ça va ?\n");
	printf("la valeur du pointeur est : %p ",s.c_str());
    printf("size : %u \n", s.size());
	printf("length : %u \n", s.length());
	printf("capacity : %u \n",s.capacity());
    s.Afficher();
    printf("  \n");
    String s1(s);
    printf("size : %u \n", s1.size());
	printf("length : %u \n", s1.length());
	printf("capacity : %u \n",s1.capacity());
    s.Afficher();
    printf("  \n");
}

//Test d'affectations de chaine 
void t3() {
    printf("test 3 \n");
    String s("Bonjour, comment ça va ?");
    
    String s1;
    String s2;
    s1 = "premiere_chaine";
    s2 = "seconde_chaine";
    String s3 = s;
    s1.Afficher();
    s2.Afficher();
    s3.Afficher();
    
    s1 = s2 = s3;
    s1.Afficher();
    s2.Afficher();
    s3.Afficher();
	printf("  \n");
}

//Test de la méthode empty (renvoie 1 si chaine vide / 0 sinon)
void t4() {
    printf("test 4  \n");
    String sv;
    String snv("Pas Vide");
    printf("Chaine vide ? %d \n", sv.empty());
    printf("Chaîne vide ? %d \n", snv.empty()); 
    printf("  \n");
}

//Test si la methode clear ne modifie pas la capacité allouée
void t5() {
    printf("test 5  \n");
    String snv("Pas Vide \n");
    snv.Afficher();
    snv.clear();
    snv.Afficher();
    printf("size : %u \n", snv.size());
	printf("capacity : %u \n",snv.capacity());
    snv.Afficher();
    printf("  \n");
}


//Test de la méthode reserve.
void t6() {
    printf("test 6  \n");
    String s = "Test6";
    s.Afficher();
    printf("size : %u \n", s.size());
	printf("capacity : %u \n",s.capacity());
    s.reserve(10);
	printf("new capacity : %u \n",s.capacity());
    s.reserve(7);
	printf("new capacity : %u \n",s.capacity());
    s.reserve(3);
	printf("new capacity : %u \n",s.capacity());
    s.Afficher();
    printf("  \n");
}

//Test de la methode c_str
void t7() {
    printf("test 7  \n");
    String s = "Test7";
    s.Afficher();
    printf("c_str() : %s \n",s.c_str());
    printf("  \n");
}

//Test de la methode max_size
void t8() {
    printf("test 8  \n");
    String s;
    printf("maxsize : %u \n",s.max_size());
    printf("  \n");

}

//Test pour les concaténations de chaine 
void t9() {
    printf("test 9  \n");
    String s("Bonjou");
    s.Afficher();
	printf("length : %u \n", s.length());
	printf("capacity : %u \n",s.capacity());
    s.Afficher();
    printf("  \n");
    
    String s1 = s+'r';
    s1.Afficher();
	printf("new length : %u \n", s1.length());
	printf("new capacity : %u \n",s1.capacity());
    s.Afficher();
    printf("  \n");
    
    String s2 = s1+", je suis un programme";
    s2.Afficher();
    String s3 = s1+s2;
    s3.Afficher();
    printf("new length : %u \n", s3.length());
    printf("new capacity : %u \n", s3.capacity());
    printf("  \n");
}

//Test de la methode resize
void t10() {
    printf("test 10  \n");;
    String s("Codage d'une classe string");
    s.Afficher();
	printf("length : %u \n", s.length());
    s.resize(s.size()+2, '+');
    s.Afficher();
	printf("new length : %u \n", s.length());
    s.resize(7);
    s.Afficher();
	printf("new length : %u \n", s.length());
    s.resize(10);
    s.Afficher();
	printf("new length : %u \n", s.length());
    
}

//Code principal - Execution des tests
int main() {
    t1();
    t2();
    t3();
    t4();
    t5();
    t6();
    t7();
    t8();
    t9();
    t10();
    return 0;
}
