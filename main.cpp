#include <iostream>
#include "calcarea.h"
#include "calcperimetro.h"
#include "calcvolume.h"

using namespace std;
// Função que mostra as opções de figuras geometricas para que sejam calculados area e perimetro (para figuras planas), e area e volume (para figuras espaciais)
int mostrar_menu() {
    int opcao;

    cout << "1 - Triangulo equilatero \n" << endl;
    cout << "2 - Retangulo \n" << endl;
    cout << "3 - Quadrado \n" << endl;
    cout << "4 - Circulo \n" << endl;
    cout << "5 - Piramide com base  quadrangular \n" << endl;
    cout << "6 - Cubo \n" << endl;
    cout << "7 - Paralelepipedo \n" << endl;
    cout << "8 - Esfera \n" << endl;
    cout << "0 - Sair \n" << endl;


    cout<< ("Opcao: ") << endl;
    cin >> opcao;

    return opcao;
}


// Função principal, a qual chama a função mostra_menu() e, de acordo com a opção escolhida, chama as respectivas funções de calculo.
int main() {
    int opcao = 1;



    while (opcao != 0) {
        opcao = mostrar_menu();

        if (opcao == 1) {
            calc_area_triangulo();
            calc_perimetro_triangulo();
        }

        else if (opcao == 2){
            calc_area_retangulo();
            calc_perimetro_retangulo();

        }

        else if (opcao == 3){
            calc_area_quadrado();
            calc_perimetro_quadrado();

        }

        else if (opcao == 4){
            calc_area_circulo();
            calc_perimetro_circulo();

        }

        else if (opcao == 5){
            calc_area_piramide();
            calc_volume_piramide();

        }

        else if (opcao == 6){
            calc_area_cubo();
            calc_volume_cubo();

        }

        else if (opcao == 7){
            calc_area_retangulo();
            calc_volume_paralelepipedo();

        }

        else if (opcao == 8){
            calc_area_retangulo();
            calc_volume_esfera();

        }

        else{
        	cout << "Opção inválida." << endl;
        }


    }

    return 0;
}
