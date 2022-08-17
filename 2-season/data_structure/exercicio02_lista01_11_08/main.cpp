/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: aluno
 *
 * Created on 11 de agosto de 2022, 10:55
 */

#include <cstdlib>

#include "cExpressao.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cExpressao obj;
    obj.insertData();
    obj.compute();
    obj.print();
    return 0;
}

