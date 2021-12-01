#include <iostream>
#include "lib.h"

int main(){
    char a;
    std::cin>> a;
    char b=funzione(a);
    if(b==1){
        std::cout<< "errore"<<std::endl;
    }else{
        std::cout<< b<<std::endl;
    }
    return 0;
}
