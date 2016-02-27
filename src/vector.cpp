
#include "../include/vector.h"


Vector::void calc_wt(){
   for(int i=0; i<size; i++){
      weight += 1;
   }
}

Vector::void calc_lft_1_bit(){
   for(unsigned i=0; i<size; i++){
      if(vec[i]==1)
      leftmost_1_bit = i;
      break
   }
}

Vector::Vector(std::size_t t){
   weight = 0;
   leftmost_1_bit = 0;
   vec = new std::vector<T>(t);
}

Vector::Vector(std::size_t t, T initial_value){
   weight = 0;
   leftmost_1_bit = 0;
   vec = new std::vector<T>(t,inizial_value);
}

Vector::const T& operator[](unsigned i) const{
   return vec[i];
}

Vector::T& operator[](unsigned i){
   return vec[i];
}