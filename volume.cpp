#include <iostream>
#include "volume.h"



float volume_piramide(float area_base, float altura){
        
    return (1/3) * area_base * altura;
    
}

float volume_cubo(float aresta){
    
    return aresta * aresta * aresta;
    
}

float volume_paralelepipedo(float aresta1, float aresta2, float aresta3){
    
    return aresta1 * aresta2 * aresta3;
    
}

float volume_esfera(float raio){
    
    return (4/3) * PI * raio * raio * raio;
}