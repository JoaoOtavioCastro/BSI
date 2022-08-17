/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cCarro.h
 * Author: jotavio
 *
 * Created on 16 de agosto de 2022, 20:53
 */

#ifndef CCARRO_H
#define CCARRO_H

class cCarro {
public:
    cCarro();
    cCarro(const cCarro& orig);
    virtual ~cCarro();
    double computeCusto();
    void printCusto(double custo);
private:
        double insertFabrica();
};

#endif /* CCARRO_H */

