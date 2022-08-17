/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Ex01_11_08.cpp
 * Author: aluno
 * 
 * Created on 11 de agosto de 2022, 10:15
 */

#include "Ex01_11_08.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

Ex01_11_08::Ex01_11_08() {
}

Ex01_11_08::Ex01_11_08(const Ex01_11_08& orig) {
}

Ex01_11_08::~Ex01_11_08() {
}

void Ex01_11_08::getData(){
    cout<<"Informe o valor do x1: ";
    cin>>this->x1;
    cout<<"Informe o valor do y1: ";
    cin>>this->y1;
    cout<<"Informe o valor do x2: ";
    cin>>this->x2;
    cout<<"Informe o valor do y2: ";
    cin>>this->y2;
}
float Ex01_11_08::compute(){
    float result = 0;
    result = pow((this->x2-this->x1), 2) + pow((this->y2-this->y1), 2);
    result = pow(result, 0.5);
    return result;
}
void Ex01_11_08::print(float result){
    cout<<endl<<"A distancia entre os pontos é: "<<result<<endl;
}