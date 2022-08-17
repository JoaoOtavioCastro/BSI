/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cIdade.cpp
 * Author: aluno
 * 
 * Created on 11 de agosto de 2022, 11:13
 */

#include "cIdade.h"
#include <iostream>

using namespace std;

cIdade::cIdade() {
}

cIdade::cIdade(const cIdade& orig) {
}

cIdade::~cIdade() {
}

void cIdade::insertData(){
    int ano, mes, dia;
    cout<<"Informe a idade em anos: ";
    cin>>ano;
    cout<<"Informe a idade em meses: ";
    cin>>mes;
    cout<<"Informe a idade em dias: ";
    cin>>dia;
    this->idade = (ano*365) + (mes*30) + dia +(ano/4);
}
void cIdade::print(){
    cout<<" a idade em dias é: "<<this->idade;
}