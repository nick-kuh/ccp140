#include <iostream>
#include "Pessoa.cpp"
using namespace std;

class Funcionario: public Pessoa{
    private:
        double salario;
        int cadastro;

    public:
        Funcionario(string nome, string sobrenome, long cpf,
                int dia, int mes, int ano, Endereco endereco,
                double salario, int cadastro):
            Pessoa(nome, sobrenome, cpf, dia, mes, ano, endereco),
            salario{salario}, cadastro{cadastro}{}

    virtual void print(){
            cout << "Dados do Funcionario: " << endl;
            cout << "Nome: " << this->getNome() << endl;
            cout << "Sobrenome: " << this->getSobrenome() << endl;
            cout << "CPF: " << this->getCPF() << endl;
            cout << "Data: " << this->getNascimento() << endl;
            cout << "Endereço: Rua " << this->getEndereco() << endl;
            cout << "Salário: " << this->salario << endl;
            cout << "Cadastro: " << this->cadastro << endl;
            // cout << endl;
    }
};