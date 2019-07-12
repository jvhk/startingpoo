#ifndef CARRO_H_INCLUDED
#define CARRO_H_INCLUDED

#include <string>

using namespace std;


class Carro{
public:
    Carro(); //construtor da classe
    ~Carro(); //destrutor da classe
    static int pneus;
    void setMarca(string marca);
    string getMarca();

    void setAno(int ano);
    int getAno();

private:
    string marca;
    int ano;
};



#endif // CARRO_H_INCLUDED
