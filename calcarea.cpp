#include <iostream>
#include "calcarea.h"
#include "area.h"

using namespace std;

// Função que pede ao usuario que digite os valores de base e altura para que seja calculada a área do triangulo equilatero
void calc_area_triangulo(){

    int baset, alturat;

    std::cout << "Entre com o valor da base do triangulo: " << std::endl;
    std::cin >> baset;
    std::cout << "Entre com o valor da altura do triangulo: " << std::endl;
    std::cin >> alturat;

    int areat = area_triangulo(baset, alturat);

    std::cout << areat << std::endl;


}


// Função que pede ao usuario que digite os valores de base e altura para que seja calculada a área do retangulo
void calc_area_retangulo(){

    int baser, alturar;

    std::cout << "Entre com o valor da base do retangulo: " << std::endl;
    std::cin >> baser;
    std::cout << "Entre com o valor da altura do retangulo: " << std::endl;
    std::cin >> alturar;

    int arear = area_retangulo(baser, alturar);

    std::cout << arear << std::endl;
}

// Função que pede ao usuario que digite o valor do lado para que seja calculada a área do quadrado
void calc_area_quadrado(){
    int ladoq;

    std::cout << "Entre com o valor do lado do quadrado: " << std::endl;
    std::cin >> ladoq;

    int areaq = area_quadrado(ladoq);

    std::cout << areaq << std::endl;
}


// Função que pede ao usuario que digite o valor do raio para que seja calculada a área do circulo
void calc_area_circulo(){

    float raioci;

    std::cout << "Entre com o valor da raio do circulo: " << std::endl;
    std::cin >> raioci;

    float areaci = area_circulo(raioci);

    std::cout << areaci << std::endl;
}


// Função que pede ao usuario que digite os valores da area base e area lateral para que seja calculada a área da piramide
void calc_area_piramide(){
  float areabasepi, arealateralpi;

  std::cout << "Entre com o valor da area base da piramide: " << std::endl;
  std::cin >> areabasepi;
  std::cout << "Entre com o valor da area lateral da piramide: " << std::endl;
  std::cin >> arealateralpi;

  float areapiramide = area_piramide(areabasepi, arealateralpi);

  std::cout << areapiramide << std::endl;

}


// Função que pede ao usuario que digite o valor da aresta para que seja calculada a área do cubo
void calc_area_cubo(){
    int arestacu;

    std::cout << "Entre com o valor da aresta do cubo: " << std::endl;
    std::cin >> arestacu;

    int areacu = area_cubo(arestacu);

    std::cout << areacu << std::endl;
}


// Função que pede ao usuario que digite os valores  das 3 arestas para que seja calculada a área do paralelepipedo
void calc_area_paralelepipedo(){
    float arestapara1, arestapara2, arestapara3;

    std::cout << "Entre com o valor da aresta 1 do paralelepipedo: " << std::endl;
    std::cin >> arestapara1;
    std::cout << "Entre com o valor da aresta 2 do paralelepipedo: " << std::endl;
    std::cin >> arestapara2;
    std::cout << "Entre com o valor da aresta 3 do paralelepipedo: " << std::endl;
    std::cin >> arestapara3;

    float areapara = area_paralelepipedo(arestapara1, arestapara2, arestapara3);

    std::cout << areapara << std::endl;

}


// Função que pede ao usuario que digite o valor do raio para que seja calculada a área da esfera
void calc_area_esfera(){

    float raioe;

    std::cout << "Entre com o valor da raio da esfera: " << std::endl;
    std::cin >> raioe;

    float areae = area_esfera(raioe);

    std::cout << areae << std::endl;
}
