#include <iostream>
#include "volume.h"


//Função que calcula o volume de uma piramide com base quadrangular
float volume_piramide(float area_base, float altura){

    return (1/3) * area_base * altura;

}


//Função que calcula o volume de um cubo
float volume_cubo(float aresta){

    return aresta * aresta * aresta;

}


//Função que calcula o volume de um paralelepipedo
float volume_paralelepipedo(float aresta1, float aresta2, float aresta3){

    return aresta1 * aresta2 * aresta3;

}


//Função que calcula a área de uma esfera
float volume_esfera(float raio){

    return (4/3) * PI * raio * raio * raio;
}
