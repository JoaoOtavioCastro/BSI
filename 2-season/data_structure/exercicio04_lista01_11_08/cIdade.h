/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cIdade.h
 * Author: jotavio
 *
 * Created on 14 de agosto de 2022, 21:44
 */

#ifndef CIDADE_H
#define CIDADE_H

class cIdade {
public:
    cIdade();
    cIdade(const cIdade& orig);
    virtual ~cIdade();
    int insertIdade();
    void printIdade(int idade);
private:

};

#endif /* CIDADE_H */

