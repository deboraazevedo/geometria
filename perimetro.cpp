#include <iostream>
#include "perimetro.h"


using namespace std;

//Função que calcula o perimetro de um triângulo equilatero (lados iguais)
int perimetro_triangulo(int lado){

    return lado*3;

}


//Função que calcula o perimetro de um retangulo
int perimetro_retangulo(int base, int altura){

    return 2* (base + altura);

}


//Função que calcula o perimetro de um quadrado
int perimetro_quadrado(int lado){

    return lado*4;

}


//Função que calcula a área de um círculo
float perimetro_circulo(float raio){

    return raio*2*PI;

}
