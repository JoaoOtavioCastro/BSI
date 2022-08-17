/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cCarro.cpp
 * Author: jotavio
 * 
 * Created on 16 de agosto de 2022, 20:53
 */

#include "cCarro.h"
#include <iostream>
using namespace std;
cCarro::cCarro() {
}

cCarro::cCarro(const cCarro& orig) {
}

cCarro::~cCarro() {
}
double cCarro::insertFabrica(){
    double custo=0;
    cout<<"Informe o valor do custo de fabrica: ";
    cin>>custo;
    return custo;
}
double cCarro::computeCusto(){
    double total=insertFabrica();
    total = total*1.45;
    total = total*1.28;
    return total;
}
void cCarro::printCusto(double custo){
    cout<<"O custo do consumidor será de: R$"<<custo;
}
