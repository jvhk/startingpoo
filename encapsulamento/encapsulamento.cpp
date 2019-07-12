#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Carro{
    private:
        string marca;
        int ano;
    public:
        void setMarca(string x){
            marca = x;
        }

        string getMarca(){
            return marca;
        }

        void setAno(int anoX){
            ano = anoX;
        }

        int getAno(){
            return ano;
        }
};


int main(){

    Carro c1;

    c1.setMarca("Fiat");
    c1.setAno(2010);

    cout<< "Ano do carro 1: " << c1.getAno() <<endl;

    return 0;
}