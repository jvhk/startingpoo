#include <iostream>
#include "carro.h"
#include <string>

using namespace std;

int main()
{
    Carro c1; //instanciando o objeto c1 (carro 1) da classe Carro
    Carro c2; //usado no teste do construtor

    c1.setAno(1990);
    c1.setMarca("Mercedes");

    cout<<"Ano do Carro: "<< c1.getAno() << endl<< "Marca do carro: "<<c1.getMarca()<<endl;

    ///Teste do construtor
    cout<<"Marca do carro 2: " << c2.getMarca()<<endl;

    ///Atributo Static (visivel como escopo global)

    cout<<"Numero de pneus c1 : "<< c1.pneus<< endl;
    cout<<"Numero de pneus c2 : "<< c2.pneus<< endl << endl;


    c1.pneus = 6;

    cout<<"Numero de pneus c1 : "<< c1.pneus<< endl;
    cout<<"Numero de pneus c2 : "<< c2.pneus<< endl;



    return 0;
}
