#include <iostream>
#include "../include/vector.h"
//#include "../include/matrix.h"
//#include "../include/factor_base.h"


int main(){

   QS::numeric::Vector<int> *Vec = new QS::numeric::Vector<int>(10,3);
   for( int i=0; i<Vec->size(); i++ )
      std::cout << Vec->get_elem(i) << std::endl;

}