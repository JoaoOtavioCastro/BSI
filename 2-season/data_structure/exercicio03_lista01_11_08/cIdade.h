/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cIdade.h
 * Author: aluno
 *
 * Created on 11 de agosto de 2022, 11:13
 */

#ifndef CIDADE_H
#define CIDADE_H

class cIdade {
public:
    cIdade();
    cIdade(const cIdade& orig);
    virtual ~cIdade();
    int idade;
    void insertData();
    void print();
private:

};

#endif /* CIDADE_H */

