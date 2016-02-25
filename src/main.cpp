
#include <iostream>
#include <gmp>

int main(){

	// Richiesta all'utente del valore di N

    mpz N;
    mpz_init(N);
    
    // vettore di numeri primi con proprietà 
	Factor_base fb = new factor_base_impl();
    

    Sieve = new Sieve_impl();


    Matrix M = new Matrix_impl;
    Matrix M2 = new Matrix2_impl;

    // importante &M &M2
    Sieve.quadratic_sieve(N,fb, &M, &M2); 
  
    bool founded = false;
    // eliminazione in parallelo (?)
    while(!founded){
      M2.gauss_elimination_for_sieveing(M,founded);
    } 


}