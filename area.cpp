#include <iostream>
#include "area.h"

using namespace std;

//Função que calcula a área de um triângulo equilatero (lados iguais)
int area_triangulo(int base, int altura){

    return (base * altura) / 2;

}


//Função que calcula a área de um retangulo
int area_retangulo(int base, int altura){

    return base * altura;

}


//Função que calcula a área de um quadrado
int area_quadrado(int lado){

    return lado*lado;

}


//Função que calcula a área de um círculo
float area_circulo(float raio){

    return raio*raio*PI;

}


//Função que calcula a área de uma piramide com base quadrangular
float area_piramide(float area_base, float area_lateral){

    return area_base + area_lateral;

}


//Função que calcula a área de um cubo
float area_cubo(float aresta){

    return aresta * aresta * 6;

}


//Função que calcula a área de um paralelepipedo
float area_paralelepipedo(float aresta1, float aresta2, float aresta3){

    float parte1 = aresta1 * aresta2 * 2;
    float parte2 = aresta1 * aresta3 * 2;
    float parte3 = aresta2 * aresta3 * 2;

    return parte1 + parte2 + parte3;

}


//Função que calcula a área de uma esfera
float area_esfera(float raio){

    return 4 * PI * raio * raio;
}
