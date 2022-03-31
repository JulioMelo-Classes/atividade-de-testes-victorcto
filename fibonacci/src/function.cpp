#include "function.h"
std::vector<unsigned int> fib_below_n( unsigned int n ){

    int fib = 0, aux = 0;
    vector<unsigned int> v;

    int i, fib1 = 1, fib2 = 1, soma; 

    for (i = 3; i <= n; i = i + 1) {                                        
        soma = fib1 + fib2;                    
        fib1 = fib2;                           
        fib2 = soma; 
        v.push_back(fib2);                          
    } 

    return v;
}
