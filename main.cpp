#include <iostream>
#include "Pessoa.cpp"
#include "Funcionario.cpp"
#include "Excecoes.cpp"
using namespace std;

int main(){
    Endereco e("Campo Largo", 6, "Mooca");
    Pessoa p("Nick", "Kuhnast", 123456, 6, 10, 2004, e);
    Funcionario f("Funcionario", "Comprometido", 9517534, 5,9,1999, e, 10000, 1);
    Pessoa*pessoas[2];
    pessoas[0] = &p;
    pessoas[1] = &f;

    for (int i=0; i<2; i++){
        pessoas[i]->print();
        cout << "----------------------------" << endl;
    }

    // p.setNome("Nick");
    // p.setSobrenome("Kuhnast");
    // p.setCpf(123456);

    

    cout << endl;

    // cout << "Dados do funcionário: " << endl;
    // cout << "Nome: " << f.getNome() << endl;
    // cout << "Sobrenome: " << f.getSobrenome() << endl;
    // cout << "CPF: " << f.getCPF() << endl;
    // cout << "Data: " << f.getNascimento() << endl;
    // cout << "Endereço: Rua " << f.getEndereco() << endl;

    // int dia,mes,ano;

    // try{
    //     cout << "Informe o dia: " << endl;
    //     cin >> dia;
    //     cout << "Informe o mes: " << endl;
    //     cin >> mes;
    //     cout << "Informe o ano: " << endl;
    //     cin >> ano;

    //     if(dia < 1 || dia > 31){
    //         throw MinhaExcecoes("Dia Invalido!");
    //     }
    //     Data d(dia, mes, ano);
    //     cout << d.getData();
        
    // }
    // catch(MinhaExcecoes e){
    //     cout << e.mensagem << endl;
    // }
};
