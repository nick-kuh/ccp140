#include <iostream>
#include "Pessoa.cpp"
using namespace std;

int main(){
    Pessoa p;
    p.setNome("Nick");
    p.setSobrenome("Kuhnast");
    p.setCpf(123456);

    cout << "Dados da pessoa: " << endl;
    cout << "Nome: " << p.getNome() << endl;
    cout << "Sobrenome: " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCpf() << endl;
};
