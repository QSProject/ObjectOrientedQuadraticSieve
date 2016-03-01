#include <iostream>
#include "../include/vector.h"
//#include "../include/matrix.h"
//#include "../include/factor_base.h"


int main(){

   QS::numeric::QSVector<int>* Vec = new QS::numeric::QSVector<int>(10, 3);

   for(int i = 0; i < Vec->size(); ++i)
      std::cout << Vec->get_elem(i) << std::endl;

  

}