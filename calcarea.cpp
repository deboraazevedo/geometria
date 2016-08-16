#include <iostream>
#include "calcarea.h"
#include "area.h"

using namespace std;


int calc_area_triangulo(int base, int altura){
    
    int baset, int alturat;
    
    std::cout << "Entre com o valor da base do triangulo: " << std::endl;
    std::cin >> baset;
    std::cout << "Entre com o valor da altura do triangulo: " << std::endl;
    std::cin >> alturat;
    
    int areat = area_triangulo(baset, alturat);
    
    return areat;
    
}


int calc_area_retangulo(int base, int altura){
    
    int baser, int alturar;
    
    std::cout << "Entre com o valor da base do retangulo: " << std::endl;
    std::cin >> baser;
    std::cout << "Entre com o valor da altura do retangulo: " << std::endl;
    std::cin >> alturar;
    
    int arear = area_triangulo(baser, alturar);
    
    return arear;
}


int calc_area_quadrado(int lado){
    int ladoq;
    std::cout << "Entre com o valor do lado do quadrado: " << std::endl;
    std::cin >> ladoq;
    
    int areaq = area_quadrado(ladoq)
    
    return areaq;
}


float calc_area_circulo(float raio){
    
    float raioci;
    std::cout << "Entre com o valor da raio do circulo: " << std::endl;
    std::cin >> raioci;
    
    float areaci = area_circulo(raioci);
    
    return areaci;
}


float calc_area_piramide(float area_base, float area_lateral);


float calc_area_cubo(float aresta){
    int arestacu;
    std::cout << "Entre com o valor da aresta do cubo: " << std::endl;
    std::cin >> arestacu;
    
    int areacu = area_cubo(arestacu);
    
    return areacu;
}
    


float calc_area_paralelepipedo(float aresta1, float aresta2, float aresta3){
    float arestapara1, float arestaopara2, float arestaopara3;
    std::cout << "Entre com o valor da aresta 1 do paralelepipedo: " << std::endl;
    std::cin >> arestapara1;
    std::cout << "Entre com o valor da aresta 2 do paralelepipedo: " << std::endl;
    std::cin >> arestapara2;
    std::cout << "Entre com o valor da aresta 3 do paralelepipedo: " << std::endl;
    std::cin >> arestapara3;
    
    float areapara = area_paralelepipedo(arestapara1, arestaopara2, arestapara3);
    
    return areapara;
    
}


float calc_area_esfera(float raio){
    
    float raioe;
    std::cout << "Entre com o valor da raio da esfera: " << std::endl;
    std::cin >> raioe;
    
    float areae = area_esfera(raioe);
    
    return areae;
}


