#include <cstdio>
#include <cstdlib>
#include "String.h"

void t1(){
    printf("test 1 \n");
    String s;
    printf("size : %lu \n", s.size());
	printf("length : %lu \n", s.length());
	printf("capacity : %lu \n",s.capacity());
    s.Afficher();
    printf("  \n");
}

void t2() {
	printf("test 2 \n");
    String s("Bonjour, comment va ?");
    printf("size : %lu \n", s.size());
	printf("length : %lu \n", s.length());
	printf("capacity : %lu \n",s.capacity());
    s.Afficher();
    printf("  \n");
    String s1(s);
    printf("size : %lu \n", s1.size());
	printf("length : %lu \n", s1.length());
	printf("capacity : %lu \n",s1.capacity());
    s.Afficher();
    printf("  \n");
}

void t3() {
    printf("test 3 \n");
    String s("Bonjour, comment va ?");
    
    String s1;
    String s2;
    s1 = 'a';
    s2 = "plo";
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
void t4() {
    printf("test 4  \n");
    String sv;
    String snv("Pas Vide");
    printf("%d et %d \n",sv.empty(),snv.empty());
    printf("  \n");
}

void t5() {
    printf("test 5  \n");
    String snv("Pas Vide \n");
    snv.Afficher();
    snv.clear();
    snv.Afficher();
    printf("size : %lu \n", snv.size());
	printf("capacity : %lu \n",snv.capacity());
    snv.Afficher();
    printf("  \n");
}

void t6() {
    printf("test 6  \n");
    String s = "Test6";
    s.Afficher();
    printf("size : %lu \n", s.size());
	printf("capacity : %lu \n",s.capacity());
    s.reserve(10);
	printf("capacity : %lu \n",s.capacity());
    s.reserve(7);
	printf("capacity : %lu \n",s.capacity());
    s.reserve(3);
	printf("capacity : %lu \n",s.capacity());
    s.Afficher();
    printf("  \n");
}

void t7() {
    printf("test 7  \n");
    String s = "Test7";
    s.Afficher();
    printf("c_str() : %s \n",s.c_str());
    printf("  \n");
}

void t8() {
    printf("test 8  \n");
    String s;
    printf("maxsize : %lu \n",s.max_size());
    printf("  \n");

}

void t9() {
    printf("test 9  \n");
    String s("Bonjou");
    s.Afficher();
	printf("length : %lu \n", s.length());
	printf("capacity : %lu \n",s.capacity());
    s.Afficher();
    printf("  \n");
    
    String s1 = s+'r';
    s1.Afficher();
	printf("length : %lu \n", s1.length());
	printf("capacity : %lu \n",s1.capacity());
    s.Afficher();
    printf("  \n");
    
    String s2 = s1+", je suis un programme";
    s2.Afficher();
    String s3 = s1+s2;
    s3.Afficher();
    printf("  \n");
}

void t10() {
    printf("test 10  \n");;
    String s("Codage d'une classe string");
    s.Afficher();
	printf("length : %lu \n", s.length());
    s.resize(s.size()+2, '+');
    s.Afficher();
	printf("length : %lu \n", s.length());
    s.resize(7);
    s.Afficher();
	printf("length : %lu \n", s.length());
    s.resize(10);
    s.Afficher();
	printf("length : %lu \n", s.length());
    
}

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
