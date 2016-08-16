#include <iostream>
#include "calcperimetro.h"
#include "perimetro.h"

using namespace std;


int calc_perimetro_triangulo(int lado){
    

    int ladot;
    
    std::cout << "Entre com o valor do lado do triangulo: " << std::endl;
    std::cin >> ladot;
    
    int perimetrot = perimetro_triangulo(ladot);
    
    return perimetrot;
    
}


int calc_perimetro_retangulo(int base, int altura){
    
    int baser, int alturar;
    
    std::cout << "Entre com o valor da base do retangulo: " << std::endl;
    std::cin >> baser;
    std::cout << "Entre com o valor da altura do retangulo: " << std::endl;
    std::cin >> alturar;
    
    int perimetror = perimetro_triangulo(baser, alturar);
    
    return perimetror;
}


int calc_perimetro_quadrado(int lado){
    
    int ladoq;
    std::cout << "Entre com o valor do lado do quadrado: " << std::endl;
    std::cin >> ladoq;
    
    int perimetroq = perimetro_quadrado(ladoq)
    
    return perimetroq;
}
    

float calc_perimetro_circulo(float raio){
    
    float raioc;
    std::cout << "Entre com o valor da raio do circulo: " << std::endl;
    std::cin >> raioc;
    
    float perimetroc = perimetro_circulo(raioc);
    
    return perimetroc;
}

