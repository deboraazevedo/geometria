#include <iostream>
#include "calcperimetro.h"
#include "perimetro.h"

using namespace std;


void calc_perimetro_triangulo(){

    int ladot;

    std::cout << "Entre com o valor do lado do triangulo: " << std::endl;
    std::cin >> ladot;

    int perimetrot = perimetro_triangulo(ladot);

    std::cout << perimetrot << std::endl;

}


void calc_perimetro_retangulo(){

    int baser, alturar;

    std::cout << "Entre com o valor da base do retangulo: " << std::endl;
    std::cin >> baser;
    std::cout << "Entre com o valor da altura do retangulo: " << std::endl;
    std::cin >> alturar;

    int perimetror = perimetro_retangulo(baser, alturar);

    std::cout << perimetror << std::endl;
}


void calc_perimetro_quadrado(){

    int ladoq;
    std::cout << "Entre com o valor do lado do quadrado: " << std::endl;
    std::cin >> ladoq;

    int perimetroq = perimetro_quadrado(ladoq);

    std::cout << perimetroq << std::endl;
}


void calc_perimetro_circulo(){

    float raioc;
    std::cout << "Entre com o valor da raio do circulo: " << std::endl;
    std::cin >> raioc;

    float perimetroc = perimetro_circulo(raioc);

    std::cout << perimetroc << std::endl;
}
