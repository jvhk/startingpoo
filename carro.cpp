#include <string>
#include "carro.h"
#include <iostream>
using namespace std;


void Carro::setMarca(string marca){
    this->marca = marca;
}

string Carro::getMarca(){
    return this->marca;
}

void Carro::setAno(int ano){
    this->ano = ano;
}

int Carro::getAno(){
    return this->ano;
}

Carro::Carro(){
    this->marca = "Fiat"; //deixando por padrão a marca do carro Fiat no construtor
}

Carro::~Carro(){
    cout<<"Carro destruido!" <<endl;
}

int Carro::pneus = 4; //teste de inicialização
