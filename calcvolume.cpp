#include <iostream>
#include "calcvolume.h"
#include "volume.h"

float calc_volume_piramide(float area_base, float area_lateral){
    
    float area_base_p, area_lateral_p;
    std::cout << "Entre com o valor da area base da piramide: " << std::endl;
    std::cin >> area_base_p;
    std::cout << "Entre com o valor da area lateral da piramide: " << std::endl;
    std::cin >> area_lateral_p;
    
    float volumep = volume_piramide(area_base_p, area_lateral_p);
    
    return volumep;
    
    
}


float calc_volume_cubo(float aresta){
    float arestac;
    std::cout << "Entre com o valor da aresta do cubo: " << std::endl;
    std::cin >> arestac;
    
    float volumec = volume_cubo(arestac);
    
    return volumec;
}
    


float calc_volume_paralelepipedo(float aresta1, float aresta2, float aresta3){
    float arestapara1, float arestapara2, float arestapara3;
    std::cout << "Entre com o valor da aresta 1 do paralelepipedo: " << std::endl;
    std::cin >> arestapara1;
    std::cout << "Entre com o valor da aresta 2 do paralelepipedo: " << std::endl;
    std::cin >> arestapara2;
    std::cout << "Entre com o valor da aresta 3 do paralelepipedo: " << std::endl;
    std::cin >> arestapara3;
    
    float volumepara = arestapara1 * arestapara2 * arestapara3
}


float calc_volume_esfera(float raio){
    
    float raioe;
    std::cout << "Entre com o valor da raio da esfera: " << std::endl;
    std::cin >> raioe;
    
    float volumeesfS = volume_esfera(raioe);
    
    return volumeesf;
}