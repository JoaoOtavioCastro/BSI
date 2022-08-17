/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cExpressao.h
 * Author: aluno
 *
 * Created on 11 de agosto de 2022, 10:56
 */

#ifndef CEXPRESSAO_H
#define CEXPRESSAO_H

class cExpressao {
public:
    cExpressao();
    cExpressao(const cExpressao& orig);
    virtual ~cExpressao();
    float d=0;
    int a=0, b=0, c=0;
    
    void insertData();
    void compute();
    void print();
private:

};

#endif /* CEXPRESSAO_H */

