#include <iostream>
#include "area.h"

using namespace std;

int area_triangulo(int base, int altura){

    return (base * altura) / 2;

}


int area_retangulo(int base, int altura){

    return base * altura;

}

int area_quadrado(int lado){

    return lado*lado;

}

float area_circulo(float raio){

    return raio*raio*PI;

}


float area_piramide(float area_base, float area_lateral){

    return area_base + area_lateral;

}

float area_cubo(float aresta){

    return aresta * aresta * 6;

}

float area_paralelepipedo(float aresta1, float aresta2, float aresta3){

    float parte1 = aresta1 * aresta2 * 2;
    float parte2 = aresta1 * aresta3 * 2;
    float parte3 = aresta2 * aresta3 * 2;

    return parte1 + parte2 + parte3;

}

float area_esfera(float raio){

    return 4 * PI * raio * raio;
}
