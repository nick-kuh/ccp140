#include <iostream>
#include "Pessoa.cpp"
#include "Excecoes.cpp"
using namespace std;

int main(){
    Endereco e("Campo Largo", 6, "Mooca");
    Pessoa p("Nick", "Kuhnast", 123456, 6, 10, 2004, e);
    // p.setNome("Nick");
    // p.setSobrenome("Kuhnast");
    // p.setCpf(123456);

    cout << "Dados da pessoa: " << endl;
    cout << "Nome: " << p.getNome() << endl;
    cout << "Sobrenome: " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
    cout << "Data: " << p.getNascimento() << endl;
    cout << "Endereço: " << p.getEndereco() << endl;

    int dia,mes,ano;

    try{
        cout << "Informe o dia: " << endl;
        cin >> dia;
        cout << "Informe o mes: " << endl;
        cin >> mes;
        cout << "Informe o ano: " << endl;
        cin >> ano;

        if(dia < 1 || dia > 31){
            throw MinhaExcecoes("Dia Invalido!");
        }
        Data d(dia, mes, ano);
        cout << d.getData();
    }
    catch(MinhaExcecoes e){
        cout << e.mensagem << endl;
    }
};
