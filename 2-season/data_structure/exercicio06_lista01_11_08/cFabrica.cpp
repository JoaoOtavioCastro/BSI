/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cFabrica.cpp
 * Author: jotavio
 * 
 * Created on 15 de agosto de 2022, 21:09
 */

#include "cFabrica.h"
#include <iostream>
using namespace std;
cFabrica::cFabrica() {
}

cFabrica::cFabrica(const cFabrica& orig) {
}

cFabrica::~cFabrica() {
}
int cFabrica::insertSeg(){
    int seg;
    cout<<"Informe o tempo de duração em segundos: ";
    cin>>seg;
    return seg;
}
int cFabrica::computeHour(int seg){
    return seg/360;
}
int cFabrica::computeMin(int seg){
    return (seg%360)/60;
}
int cFabrica::computeSeg(int seg){
    return (seg%360)%60;
}
void cFabrica::printFabrica(){
    int time = insertSeg();
    cout<<"\nHoras:    "<<computeHour(time);
    cout<<"\nMinutos:  "<<computeMin(time);
    cout<<"\nSegundos: "<<computeSeg(time);
}