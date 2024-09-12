#include <iostream>
using namespace std;

class Pessoa{
    private:
        string nome;
        string sobrenome;
        long cpf;

    public:
        void setNome(string nome){
            this->nome=nome;
        }
        void setSobrenome(string sobrenome){
            this->sobrenome=sobrenome;
        }
        void setCpf(long cpf){
            this->cpf=cpf;
        }

        string getNome(){
            return nome;
        }

        string getSobrenome(){
            return sobrenome;
        }

        long getCpf(){
            return cpf;
        }
};