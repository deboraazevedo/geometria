#include <iostream>
#include "perimetro.h"


using namespace std;

int perimetro_triangulo(int lado){
    
    return lado*3;
    
}


int perimetro_retangulo(int base, int altura){
    
    return 2* (base + altura);
    
}

int perimetro_quadrado(int lado){
    
    return lado*4;
    
}

float perimetro_circulo(float raio){
    
    return raio*2*PI;
    
}