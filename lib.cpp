#include "lib.h"

;char funzione(char a){
  bool r;
  char b;
  if((65<=a && a<=90) || (97<=a && a<=122)){
      r=true;
  if(65<=a && a<=90) {
      b=a+32;
  }else{
      b=a-32;
  }
  }else{
      r=false;
      b=1;
  }
  return b;
}
//
// Created by Utente on 01/12/2021.
//

