/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cExpressao.cpp
 * Author: aluno
 * 
 * Created on 11 de agosto de 2022, 10:56
 */

#include "cExpressao.h"
#include <iostream>
#include <cmath>
using namespace std;

cExpressao::cExpressao() {
}

cExpressao::cExpressao(const cExpressao& orig) {
}

cExpressao::~cExpressao() {
}

void cExpressao::insertData(){
    cout<<"Informe o valor de A: ";
    cin>>this->a;
    cout<<"Informe o valor de B: ";
    cin>>this->b;
    cout<<"Informe o valor de C: ";
    cin>>this->c;
}
void cExpressao::compute(){
    float r=0, s=0;
    
    r = pow((this->a+this->b), 2);
    s = pow((this->b+this->c), 2);
    this->d = (r+s)/2;
}
void cExpressao::print(){
    cout<<"O resultado é: "<<this->d;
}