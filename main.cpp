#include <streamio>
#include "calcarea.h"
#include "calcperimetro.h"
#include "calcvolume.h"

using namespace std;

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



int main(v) {
    int opcao = 1;



    while (opcao != 0) {
        opcao = mostrar_menu();

        if (opcao == 1) {
            calc_area_triangulo();
            calc_perimetro_triangulo();
        }
        
        else if (opcao == 2){
            calc_area_triangulo();
            calc_perimetro_triangulo();
            
        } 
        
        else{
        	cout << "Opção inválida." << endl;
		}
    }

    return 0;
}