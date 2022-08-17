/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cAluno.cpp
 * Author: jotavio
 * 
 * Created on 14 de agosto de 2022, 22:05
 */

#include "cAluno.h"
#include <iostream>
using namespace std;
cAluno::cAluno() {
}

cAluno::cAluno(const cAluno& orig) {
}

cAluno::~cAluno() {
}
int cAluno::insertNotas(int i){
    int nota;
    
        cout<<"Informe a "<<i+1<<"ª nota: ";
        cin>>nota;
    return nota;
}
void cAluno::printNotas(){
    int notas[3];
    for(int i =0; i<3;i++){
        notas[i]=insertNotas(i);
    }
    float media = (notas[0]*0.2) + (notas[1]*0.3) + (notas[2]*0.5);
    cout<<"A média do aluno é: "<<media;
}

