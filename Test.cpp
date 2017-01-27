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

int main() {
    t1();
    return 0;
}
