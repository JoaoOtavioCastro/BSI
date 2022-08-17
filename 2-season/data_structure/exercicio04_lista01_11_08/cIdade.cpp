/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cIdade.cpp
 * Author: jotavio
 * 
 * Created on 14 de agosto de 2022, 21:44
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
int cIdade::insertIdade(){
    int idade=0;
    cout<<"Informe a idade em dias: ";
    cin>>idade;
    return idade;
}
void cIdade::printIdade(int idade){
    int ano=0, mes=0, dia=0;
    ano = idade/365;
    mes = (idade%365)/30;
    dia = (idade%365)%30;
    cout<<"Idade em anos: "<<ano<<"\nMeses: "<<mes<<"\nDias: "<<dia;
}
